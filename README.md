<h2>About the Project<h2>

This project is a Mini C Compiler, written in the language C. Lex and Yacc were the main tools which were used to build this. The project was implemented through a series of stages such as generation of the symbol table, creation of the abstract syntax tree, generation of intermediate code, optimization of this intermediate code and finally the conversion of this code to assembly code. The mini C compiler is capable of efficiently compiling the given input C code, while catching any errors that might be present in the source code. 

<h3>Architecture of the language</h3>

The implemented mini-compiler handles the syntax and semantics of the C language’s grammar. It identifies the syntax errors present in the input program and provides useful error messages along with the line numbers. <br>
This helps in faster error correction. It identifies errors such as missing semicolons, unidentified tokens, using undeclared variables, mismatched brackets, redeclaration within a scope, etc. The compiler is also capable of ignoring all forms of valid comments that may be present in the code. Invalid comments of the C language are identified as errors and returned accordingly.<br>
The mini-compiler handles the following constructs:
<ul>
  <li>If condition</li>
  <li>For loops</li>
  <li>While loops</li>
</ul>
Thus the semantics and syntactical usage of these constructs will be taken care of as and when they appear in the input program.

<h3>About the team</h3>

<ul>
  <li><a href = "https://github.com/BhavyaCharan">Bhavya Charan</a></li>
  <li><a href = "https://github.com/bharaniuk">Bharani Ujjaini Kempaiah</a></li>
  <li><a href = "https://github.com/AryaRajivChaloli">Arya Rajiv Chaloli</a></li>
 </ul>
