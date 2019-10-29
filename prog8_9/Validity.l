%{
  #include <stdio.h> 
	#include "y.tab.h"
%}

%%

[0-9]+ 	{
          yylval = atoi(yytext);
          return DIGIT;
        }

[A-Za-b]  {
            return VAR;
          }

[\n]    return NEWLINE;
.    return *yytext;

%%

int yywrap()
{
	return 1;
}