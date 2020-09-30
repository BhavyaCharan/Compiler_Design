import re
import sys
import time

binary_operators = {"+", "-", "*", "/", "&", "|", "^", ">>", "<<", "==", ">=", "<=", "!=", ">", "<"}

temp_list = []

reg_available = [0,1,2,3,4]
#reg_available = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]

#{'a':10, 'c':9}
lru = {}

stored ={}

def add_to_lru(char):
	if(char in lru):
		lru[char] += 10
	else:
		lru[char] = 10

def decr_lru():
	for i in lru:
		if(lru[i]!=0):
			lru[i] = lru[i] - 1

def min_lru():
	t_min = 1000
	min_ele = -1
	for i in lru:
		if(lru[i] < t_min):
			t_min = lru[i]
			min_ele = i
	return min_ele

def printasm(list_of_lines, message = "") :
	print(message.upper())
	for line in list_of_lines :
		print(line.strip())

def get_labels(list_of_lines):
	labels = []
	for line in list_of_lines:
		tokens = line.split()
		if "goto" in tokens:
			index_goto = tokens.index("goto")
			label = tokens[index_goto + 1]
			labels.append(label)
	return labels

def rest_of_line(line):
	new_line = line.split(":")
	return new_line[1]

def get_just_labels(list_of_lines, labels):
	new_list_of_lines = []
	for line in list_of_lines:
		new_line = ''
		tokens = line.split()
		curr_label = tokens[0]
		if(tokens[0]=="STR" or tokens[0]== "LDR"):
			l = line.split("\n")
			for i in l:
				if (i[:3]=="STR" or i[:3]=="LDR"):
				
					new_list_of_lines.append(i)
				else:
					curr_label = i.split()[0]
					curr_label = curr_label[:len(curr_label) - 1]
					if curr_label in labels:
						new_line = new_line + i.split()[0]
					new_line = new_line + rest_of_line(line)
					new_list_of_lines.append(new_line)
		else:
			curr_label = curr_label[:len(curr_label) - 1]
			if curr_label in labels:
				new_line = new_line + tokens[0]
			new_line = new_line + rest_of_line(line)
			new_list_of_lines.append(new_line)
	
	return new_list_of_lines


def get_next_temp(char):
	global reg_available
	if(len(reg_available)==0):
		#Get lru
		t_str = min_lru()
		del lru[t_str]
		val,temp_rno,instr = get_temp(t_str) 
		#Make str instr
		curr_str ="STR "  + str(t_str) + ", R" + str(temp_rno)
		#put in dict telling it has been stored
		stored[t_str] = t_str
		#remove from temp_list
		for j in range(len(temp_list)) :
			if(temp_list[j][1]==t_str):
				temp_list[j][1]='0'	
		
		#give this guys register to the new guy
		last_temp_number = temp_rno
		my_temp = [last_temp_number]
		my_temp.append(char)
		temp_list.append(my_temp)
		return [1,last_temp_number,curr_str];
	else:
		last_temp_number = reg_available[0]
		reg_available = reg_available[1:]
		my_temp = [last_temp_number]
		my_temp.append(char)
		temp_list.append(my_temp)
		return 0,last_temp_number," "

def get_existing_temp(char):
	for entry in temp_list:
		if entry[1] == char:
			return entry[0]
	return -1

def get_temp(char):
	got = get_existing_temp(char)
	if got == -1:
		#Check if it has been stored
		#For which do an LDR as well
		if(char in stored):
			val,temp_rno,instr = get_next_temp(char)
			
			curr_str ="LDR R" + str(temp_rno) + ", " + str(char)
			add_to_lru(char)
			del stored[char]
			if(val):
				#reg was not available, so had to store it
				instr = instr + "\n"+curr_str
				return 1,temp_rno,instr
			else:
				#reg was available, didnt have to str it
				return 1,temp_rno,curr_str
		else:
			val,rno,instr=get_next_temp(char)
			if(val):
				return 1,rno,instr
			else:
				return 0,rno," " #new
	else:
		return 0,got," "  #old
	
def load_num(tokens):
	add_to_lru(tokens[1])
	val,temp,instr = get_temp(tokens[1])
	#curr_str = tokens[0] + " MOV R" + str(temp) + ", #" + tokens[3] + "\nST " + tokens[1] + ", R" + str(temp)
	curr_str = tokens[0] + " MOV R" + str(temp) + ", #" + tokens[3]
	if(val):
		instr = instr + "\n" + curr_str
		return instr
	else:
		return curr_str

def load_var(tokens):
	add_to_lru(tokens[1])
	add_to_lru(tokens[3])
	l = get_temp(tokens[1])
	val1 = l[0]
	temp_lhs = l[1]
	instr1 = l[2]
	val2,temp_rhs,instr2 = get_temp(tokens[3])
	#curr_str = tokens[0] + " MOV R" + str(temp_lhs) + ", R" + str(temp_rhs) + "\nST " + tokens[1] + ", R" + str(temp_lhs)	
	curr_str = tokens[0] + " MOV R" + str(temp_lhs) + ", R" + str(temp_rhs)

	#val is 0 when the temp was already in a register, nothing extra had to be done
	#val is 1 when you had to load/str etc
	if(val1):
		instr1 = instr1 + "\n" + curr_str
		return instr1
	if(val2):
		instr2 = instr2 + "\n" + curr_str
		return instr2
	else:
		return curr_str

def expr_str(tokens, op_str):
	#7: t0 = e * f
	add_to_lru(tokens[1])
	val,temp_lhs,instr = get_temp(tokens[1])
	if tokens[3].isnumeric():
		if tokens[5].isnumeric():
			curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", #" + tokens[3] + ", #" + tokens[5]
			if(val):
				instr = instr + "\n" + curr_str
				return instr
			else:
				return curr_str
		else:
			add_to_lru(tokens[5])
			val1,temp_rhs2,instr1 = get_temp(tokens[5])
			curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", #" + tokens[3] + ", R" + str(temp_rhs2)
			if(val):
				if(val1):
			
					instr = instr + "\n" + instr1
				instr = instr + "\n" + curr_str
				return instr
			elif(val1):
		
				instr1 = instr1 + "\n" + curr_str
				return instr1
			else:
				return curr_str
	else:
		add_to_lru(tokens[3])
		val1,temp_rhs1,instr1 = get_temp(tokens[3])
		if tokens[5].isnumeric():
			curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", R" + str(temp_rhs1) + ", #" + tokens[5]
			if(val):
				if(val1):
			
					instr = instr + "\n" + instr1
				instr = instr + "\n" + curr_str
				return instr
			elif(val1):
		
				instr1 = instr1 + "\n" + curr_str
				return instr1
			else:
				return curr_str
		else:
			add_to_lru(tokens[5])
			val1,temp_rhs2,instr1 = get_temp(tokens[5])
			curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", R" + str(temp_rhs1) + ", R" + str(temp_rhs2)
			if(val):
				if(val1):
				
					instr = instr + "\n" + instr1
				instr = instr + "\n" + curr_str
				return instr
			elif(val1):
			
				instr1 = instr1 + "\n" + curr_str
				return instr1
			else:
				return curr_str

def if_stmt(tokens):
	#12: if t2 goto 14
	add_to_lru(tokens[2])
	val,temp,instr = get_temp(tokens[2])
	curr_str = tokens[0] + " CMP R" + str(temp) + " #1\nBEQ " + tokens[4]
	if(val):
	
		instr = instr + "\n" + curr_str
		return instr
	else:
		return curr_str

def release_reg(tokens):
	
	for i in var_occ:
		if(tokens[0] == var_occ[i]):
			if(len(tokens)==4):
				if(tokens[3]==i):
					#del var_occ[i]
					for j in range(len(temp_list)) :
						if(temp_list[j][1]==tokens[3]):
							reg_available.append(temp_list[j][0])
							temp_list[j][1]='0'
							
			if(len(tokens)==6):
				if(tokens[3]==i):
					#del var_occ[i]
					for j in range(len(temp_list)) :
						if(temp_list[j][1]==tokens[3]):
							reg_available.append(temp_list[j][0])
							temp_list[j][1]='0'
			if(len(tokens)==6):
				if(tokens[5]==i):
					#del var_occ[i]
					for j in range(len(temp_list)) :
						if(temp_list[j][1]==tokens[5]):
							reg_available.append(temp_list[j][0])
							temp_list[j][1]='0'
			
			

def convert_to_asm(list_of_lines):
	labels = get_labels(list_of_lines)
	list_of_lines.pop(0)
	list_of_lines.pop(len(list_of_lines) - 1)
	new_list_of_lines = []
	#modify the original stuff
	for line in list_of_lines:
		decr_lru()
		tokens = line.split()
		if len(tokens) == 6:
			#expressions
			if tokens[4] == '+':
				curr_str = expr_str(tokens, "ADD")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '-':
				curr_str = expr_str(tokens, "SUB")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '*':
				curr_str = expr_str(tokens, "MUL")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '/':
				curr_str = expr_str(tokens, "UDIV")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '&':
				curr_str = expr_str(tokens, "AND")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '|':
				curr_str = expr_str(tokens, "OR")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '<':
				curr_str = expr_str(tokens, "LT")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '>':
				curr_str = expr_str(tokens, "GT")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == "<=":
				curr_str = expr_str(tokens, "LTE")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == ">=":
				curr_str = expr_str(tokens, "GTE")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == "==":
				curr_str = expr_str(tokens, "EQ")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == "!=":
				curr_str = expr_str(tokens, "NE")
				new_list_of_lines.append(curr_str)
			
		elif len(tokens) == 4:
			#assignment
			if tokens[3].isnumeric():
				curr_str = load_num(tokens)
				new_list_of_lines.append(curr_str)
			else:
				curr_str = load_var(tokens)
				new_list_of_lines.append(curr_str)

		elif 'if' in tokens:
			curr_str = if_stmt(tokens)
			new_list_of_lines.append(curr_str)
			
		else:
			#need not be branch here but i've assumed it to be
			curr_str = tokens[0] + " B " + tokens[2]
			new_list_of_lines.append(curr_str)
		release_reg(tokens)

	#print labels only for those lines that have actual labels
	just_labels = get_just_labels(new_list_of_lines, labels)
	
	return just_labels

var_occ={}
#If it is a temp, which line no had it last
def find_last_occ(list_of_lines):
	for line in list_of_lines:
		tokens=line.split()
		if(len(tokens)==6):
			if(tokens[3][0]=='t'):
				var_occ[tokens[3]] = tokens[0]
			if(tokens[5][0]=='t'):
				var_occ[tokens[5]] = tokens[0]
			
		elif(len(tokens)==4):
			if(tokens[3][0]=='t'):
				var_occ[tokens[3]] = tokens[0]
if __name__ == "__main__" :

	if len(sys.argv) == 2 :
		icg_file = str(sys.argv[1])
	
	list_of_lines = []
	
	f = open(icg_file, "r")
	for line in f :
		list_of_lines.append(line)
	f.close()
	
	orig_len = len(list_of_lines)
	
	print("-------------------- ORIGINAL ICG ------------------")
	printasm(list_of_lines, "ICG")
	find_last_occ(list_of_lines)
	print("-------------------- ASM ------------------")
	asm = convert_to_asm(list_of_lines)
	printasm(asm, "\nAssembly code\n")
	print("------------------ DONE ASM ---------------")

