import re
import sys

binary_operators = {"+", "-", "*", "/", "&", "|", "^", ">>", "<<", "==", ">=", "<=", "!=", ">", "<"}

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
		curr_label = curr_label[:len(curr_label) - 1]
		if curr_label in labels:
			new_line = new_line + tokens[0]
		new_line = new_line + rest_of_line(line)
		new_list_of_lines.append(new_line)
	
	return new_list_of_lines

#0: a, 1: b
register_values = {}
#register_available = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
register_available = [0, 1, 2]
register_occupied  = []
#a, b
memory = []

def get_register(operand):
	print("\n\n ========= Register values ======= ", register_values)
	print(" ========= Register available ======= ", register_available)
	print(" ========= Register occupied ======= ", register_occupied)
	print(" ========= Memory ======= ", memory)
	
	print("Getting a new register for ", operand)
	#If registers are available
	if(not len(register_available) == 0):
		reg = register_available.pop(0)
		print("----- Register is available .... gave ", reg)
		register_occupied.append(reg)
		#Check if it was stored in memory
		if (operand in memory):
			print("The variable", operand, "was stored in memory")
			#load
			curr_str = "LDR R" + str(reg) + ", " + operand + "\n"
			return reg, curr_str
		else:
		#Not present in memory, just return the register
			print("Not present in memory, returning new available reg")
			return reg, ""
	
	
	else:
		# remove the least recently used register
		print("----- Register was not available")
		reg = register_occupied[0]
		reg = register_occupied.pop(0)
		variable = register_values.pop(reg)
		register_occupied.append(reg)
		print("Storing the variable ", variable)
		
		# Store the value present in the register into the operand, in memory
		curr_str = "STR " + variable + ", R" + str(reg) + "\n"
		
		#Check if it was stored in memory
		if (operand in memory):
			print("The variable", operand, "was already stored in memory,,, so loading it")
			#load
			curr_str = curr_str + "LDR R" + str(reg) + ", " + operand + "\n"
			return reg, curr_str
		else:
			#Not present in memory, just return the register
			memory.append(variable)
			print("Not present in memory, adding to memory,  returning new available reg")
			print("The string uptill now ", curr_str)
			return reg, curr_str

def get_temp(operand):
	for key in register_values.keys():
		if(operand == register_values[key]):
			print("\nRegister is already present\n")
			register = key
			#bring it to the front
			register_occupied.remove(register)
			register_occupied.append(register)
			return register, ""
	register, curr_str = get_register(operand)
	register_values[register]=operand
	return register, curr_str
	
def load_num(tokens):
	temp, curr_str = get_temp(tokens[1])
	#curr_str = tokens[0] + " MOV R" + str(temp) + ", #" + tokens[3] + "\nST " + tokens[1] + ", R" + str(temp)
	curr_str = tokens[0] + curr_str + " MOV R" + str(temp) + ", #" + tokens[3]
	#curr_str = curr_str + '\nST ' + tokens[1] + str(temp) 
	return curr_str

def load_var(tokens):
	temp_lhs, curr_lhs = get_temp(tokens[1])
	temp_rhs, curr_rhs = get_temp(tokens[3])
	#curr_str = tokens[0] + " MOV R" + str(temp_lhs) + ", R" + str(temp_rhs) + "\nST " + tokens[1] + ", R" + str(temp_lhs)
	curr_str = tokens[0] + curr_lhs + curr_rhs + " MOV R" + str(temp_lhs) + ", R" + str(temp_rhs)
	return curr_str

def expr_str(tokens, op_str):
	#7: t0 = e * f
	temp_lhs, curr_lhs = get_temp(tokens[1])

	#7: t0 = 5 * 4
	#or
	#7: t0 = 5 * e
	if tokens[3].isnumeric():

		#7: t0 = 5 * 4
		if tokens[5].isnumeric():
			curr_str = tokens[0] + curr_lhs + " " + op_str + " R" + str(temp_lhs) + ", #" + tokens[3] + ", #" + tokens[5]
			return curr_str

		#7: t0 = 5 * e
		else:
			temp_rhs2, curr_rhs = get_temp(tokens[5])
			curr_str = tokens[0] + curr_lhs + curr_rhs + " " + op_str + " R" + str(temp_lhs) + ", #" + tokens[3] + ", R" + str(temp_rhs2)
			return curr_str

	#7: t0 = f * 4
	#or
	#7: t0 = f * e
	else:
		temp_rhs1, curr_rhs1 = get_temp(tokens[3])

		#7: t0 = f * 4
		if tokens[5].isnumeric():
			curr_str = tokens[0] + curr_lhs + curr_rhs1 + " " + op_str + " R" + str(temp_lhs) + ", R" + str(temp_rhs1) + ", #" + tokens[5]
			return curr_str

		#7: t0 = f * e
		else:
			temp_rhs2 = get_temp(tokens[5])
			curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " " + op_str + " R" + str(temp_lhs) + ", R" + str(temp_rhs1) + ", R" + str(temp_rhs2)
			return curr_str

#possible conditional expr => LT, GT, LTE, GTE, EQ, NE
def cond_expr_str(tokens, op_str):
	#2: t0 = a == 2
	temp_lhs, curr_lhs = get_temp(tokens[1])

	#7: t0 = 5 == 4
	#or
	#7: t0 = 5 == e
	if tokens[3].isnumeric():

		#7: t0 = 5 == 4
		if tokens[5].isnumeric():
			#curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", #" + tokens[3] + ", #" + tokens[5]
			if (op_str == 'EQ'):
				curr_str = tokens[0] + curr_lhs + " CMP #" + tokens[3] + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'NE'):
				curr_str = tokens[0] + curr_lhs + " CMP #" + tokens[3] + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #0" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #1"
				return curr_str
			if (op_str == 'LT'):
				curr_str = tokens[0] + curr_lhs + " CMP #" + tokens[3] + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GT'):
				curr_str = tokens[0] + curr_lhs + " CMP #" + tokens[3] + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'LTE'):
				curr_str = tokens[0] + curr_lhs + " CMP #" + tokens[3] + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GTE'):
				curr_str = tokens[0] + curr_lhs + " CMP #" + tokens[3] + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #0"
				return curr_str

		#7: t0 = 5 == e
		else:
			temp_rhs2, curr_rhs2 = get_temp(tokens[5])
			#curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", #" + tokens[3] + ", R" + str(temp_rhs2)
			if (op_str == 'EQ'):
				curr_str = tokens[0] + curr_lhs + curr_rhs2 + " CMP #" + tokens[3] + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'NE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs2 + " CMP #" + tokens[3] + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #0" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #1"
				return curr_str
			if (op_str == 'LT'):
				curr_str = tokens[0] + curr_lhs + curr_rhs2 + " CMP #" + tokens[3] + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GT'):
				curr_str = tokens[0] + curr_lhs + curr_rhs2 + " CMP #" + tokens[3] + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'LTE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs2 + " CMP #" + tokens[3] + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GTE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs2 + " CMP #" + tokens[3] + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #0"
				return curr_str
			

	#7: t0 = f == 4
	#or
	#7: t0 = f == e
	else:
		temp_rhs1, curr_rhs1 = get_temp(tokens[3])

		#7: t0 = f == 4
		if tokens[5].isnumeric():
			#curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", R" + str(temp_rhs1) + ", #" + tokens[5]
			if (op_str == 'EQ'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + " CMP R" + str(temp_rhs1) + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'NE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + " CMP R" + str(temp_rhs1) + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #0" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #1"
				return curr_str
			if (op_str == 'LT'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + " CMP R" + str(temp_rhs1) + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GT'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + " CMP R" + str(temp_rhs1) + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'LTE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + " CMP R" + str(temp_rhs1) + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GTE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + " CMP R" + str(temp_rhs1) + ", #" + tokens[5] + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #0"
				return curr_str

		#7: t0 = f == e
		else:
			temp_rhs2, curr_rhs2 = get_temp(tokens[5])
			#curr_str = tokens[0] + " " + op_str + " R" + str(temp_lhs) + ", R" + str(temp_rhs1) + ", R" + str(temp_rhs2)
			if (op_str == 'EQ'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " CMP R" + str(temp_rhs1) + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'NE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " CMP R" + str(temp_rhs1) + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVEQ R" + str(temp_lhs) + ", #0" + "\n"
				curr_str = curr_str + "MOVNE R" + str(temp_lhs) + ", #1"
				return curr_str
			if (op_str == 'LT'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " CMP R" + str(temp_rhs1) + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GT'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " CMP R" + str(temp_rhs1) + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'LTE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " CMP R" + str(temp_rhs1) + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVLE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVGT R" + str(temp_lhs) + ", #0"
				return curr_str
			if (op_str == 'GTE'):
				curr_str = tokens[0] + curr_lhs + curr_rhs1 + curr_rhs2 + " CMP R" + str(temp_rhs1) + ", R" + str(temp_rhs2) + "\n"
				curr_str = curr_str + "MOVGE R" + str(temp_lhs) + ", #1" + "\n"
				curr_str = curr_str + "MOVLT R" + str(temp_lhs) + ", #0"
				return curr_str

def if_stmt(tokens):
	#12: if t2 goto 14
	temp, curr_str = get_temp(tokens[2])
	curr_str = tokens[0] + curr_str + " CMP R" + str(temp) + ", #1\nBEQ " + tokens[4]
	return curr_str

def convert_to_asm(list_of_lines):
	#Find out which all labels are actually required
	labels = get_labels(list_of_lines)
	
	#Remove the "main: ", "exit: " lines
	list_of_lines.pop(0)
	last_line = list_of_lines.pop(len(list_of_lines) - 1)
	
	new_list_of_lines = []
	for line in list_of_lines:
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
				curr_str = expr_str(tokens, "DIV")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '&':
				curr_str = expr_str(tokens, "AND")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '|':
				curr_str = expr_str(tokens, "OR")
				new_list_of_lines.append(curr_str)

			#conditional expressions
			elif tokens[4] == '<':
				curr_str = cond_expr_str(tokens, "LT")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == '>':
				curr_str = cond_expr_str(tokens, "GT")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == "<=":
				curr_str = cond_expr_str(tokens, "LTE")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == ">=":
				curr_str = cond_expr_str(tokens, "GTE")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == "==":
				curr_str = cond_expr_str(tokens, "EQ")
				new_list_of_lines.append(curr_str)
			elif tokens[4] == "!=":
				curr_str = cond_expr_str(tokens, "NE")
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

		elif 'goto' in tokens:
			curr_str = tokens[0] + " B " + tokens[2]
			new_list_of_lines.append(curr_str)

	
	new_list_of_lines.append(last_line)
	#print labels only for those lines that have actual labels
	just_labels = get_just_labels(new_list_of_lines, labels)
	
	return just_labels


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

	print("-------------------- ASM ------------------")
	asm = convert_to_asm(list_of_lines)
	printasm(asm, "\nAssembly code")
