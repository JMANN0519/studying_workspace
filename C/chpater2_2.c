/**********************************************/
/*
chapter2_2.c
Jeongmin Ahn
practice for escape sequence
Jun 19, 2025
*/
/**********************************************/
#include <stdio.h> 
/*
\n : enter key
\t : tab key
\\ : print \
\' : print '
\" : print "
\? : print ?
%% : print % 
*/
int main(void) { 
    printf("Print number and enter key : %d \n", 1);
    printf("Print tab key and number and enter key: \t%d \n", 1);
    printf("Print \"\\\" : \\\n");
    printf("Print \"\'\" : \'\n");
    printf("Print \"\"\" : \"\n");
    printf("Print \"\?\" : \?\n");

    return 0;
}