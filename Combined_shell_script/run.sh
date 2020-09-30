#!/bin/bash
lex symboltable_lex.l
yacc -d symboltableyacc.y
gcc -lfl -ly y.tab.c -o symboltable
./symboltable >> op.txt

lex ast_lex.l
yacc -d ast_yacc.y
gcc -lfl -ly y.yab.c -o ast
./ast >>op.txt

lex icg_lex.l
yacc -d icg_yacc.y -v
g++ -std=c+11 -g y.tab.c -ly -ll -o icg
./icg file.c >> op.txt
./icg file.c > ICG.code


python optimization.py >> op.txt
python optimization.py > ICG.code

python asm.py ICG.code >> op.txt

cat op.txt

