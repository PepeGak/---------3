#/usr/bin/bash

SRC=./src/
OBJ=./obj/
DBG=./debug/
RLS=./release/

bison -d -y -v -Wno-yacc ${SRC}parser.ypp --debug
flex -d ${SRC}lexer.l
mv parser.tab.cpp parser.tab.hpp ${DBG}
mv lex.yy.cpp ${DBG}

bison -d -y -v -Wno-yacc ${SRC}parser.ypp
flex ${SRC}lexer.l
mv parser.tab.cpp parser.tab.hpp ${RLS}
mv lex.yy.cpp ${RLS}

g++ ${SRC}main.cpp -g -c -std=c++17 -DYYDEBUG -DFLEX_DEBUG -o ${DBG}main.o
g++ ${DBG}lex.yy.cpp -g -c -std=c++17 -DFLEX_DEBUG -o ${DBG}lex.yy.o
g++ ${DBG}parser.tab.cpp -g -c -std=c++17 -DYYDEBUG -o ${DBG}parser.tab.o
g++ ${DBG}parser.tab.o ${DBG}lex.yy.o ${DBG}main.o -o kurs_debug.out

g++ ${SRC}main.cpp -c -std=c++17 -o ${RLS}main.o
g++ ${RLS}lex.yy.cpp -c -std=c++17 -o ${RLS}lex.yy.o
g++ ${RLS}parser.tab.cpp -c -std=c++17 -o ${RLS}parser.tab.o
g++ ${RLS}parser.tab.o ${RLS}lex.yy.o ${RLS}main.o -o kurs_release.out