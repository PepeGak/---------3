%option outfile="lex.yy.cpp"
%option noyywrap

%{
#include <iostream>
#include <string>
#include <cstring>
#include "parser.tab.hpp"

extern char* yytext;
extern int yylineno;
%}

IDENTIFIER [a-zA-Z_][a-zA-Z0-9]*
DIGIT [0-9]
NUMBER {DIGIT}+

%%
"PROGRAM"       { yylval.sVal = strdup(yytext); return PROGRAM; }
"END_PROGRAM"   { yylval.sVal = strdup(yytext); return END_PROGRAM; }
"VAR"           { yylval.sVal = strdup(yytext); return VAR; }
"END_VAR"       { yylval.sVal = strdup(yytext); return END_VAR; }
"FOR"           { yylval.sVal = strdup(yytext); return FOR; }
"TO"            { yylval.sVal = strdup(yytext); return TO; }
"DO"            { yylval.sVal = strdup(yytext); return DO; }
"END_FOR"       { yylval.sVal = strdup(yytext); return END_FOR; }
"IF"            { yylval.sVal = strdup(yytext); return IF; }
"THEN"          { yylval.sVal = strdup(yytext); return THEN; }
"ELSIF"         { yylval.sVal = strdup(yytext); return ELSIF; }
"END_IF"        { yylval.sVal = strdup(yytext); return END_IF; }
"WHILE"         { yylval.sVal = strdup(yytext); return WHILE; }
"END_WHILE"     { yylval.sVal = strdup(yytext); return END_WHILE; }
"INT"           { yylval.sVal = strdup(yytext); return INT; }
":"             { yylval.sVal = strdup(yytext); return AS; }
";"             { yylval.sVal = strdup(yytext); return NEW_LINE; }
[-+/*]          { yylval.sVal = strdup(yytext); return OPERATOR; }
":="            { yylval.sVal = strdup(yytext); return ASSIGNMENT; }
"="             { yylval.sVal = strdup(yytext); return EQUAL; }
"<>"            { yylval.sVal = strdup(yytext); return NOT_EQUAL; }
{IDENTIFIER}    { yylval.sVal = strdup(yytext); return IDENTIFIER; }
{NUMBER}        { yylval.sVal = strdup(yytext); return NUMBER; }
[\s\t]*         { }
\n              { yylineno++; }
%%
