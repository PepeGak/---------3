#include <iostream>
#include <string>
#include <string.h>
#include <cstring>

extern FILE* yyin;
extern int yylineno, yydebug, yy_flex_debug;
int yyparse(void);

void yyerror(const char* msg)
{
    std::cerr.flush();
    std::cerr << yylineno << "->" << msg << std::endl;
}

int main(int argc, char* args[])
{
    if (argc != 2)
        return -1;
    yyin = fopen(args[1], "r");
    
#ifdef YYDEBUG
    yydebug = 1;
#endif
#ifdef FLEX_DEBUG
    yy_flex_debug = 1;
#endif

    do {
        yyparse();
    } while (!feof(yyin));
    
    fclose(yyin);
    return 0;
}