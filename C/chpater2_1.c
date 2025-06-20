/**********************************************/
/*
chapter2_1.c
Jeongmin Ahn
practice for structure of c programming (structure, library, main function)
Jun 19, 2025
*/
/**********************************************/
/*
In C language, declarations are essential
Commonly used functions are already created for programmers.
printf() and scanf() are typical examples.

Including standard header files allows access to standard library functions, 
so there's no need to declare them separately.
*/
#include <stdio.h> // header file for standard library 

int add(int x) { //x is parameter
    return x + 1;
}
/*
main is entry point for consol-based program 
main is necessary and should only appear once.
In C language, there is a difference between int main(void) and int main().
*/
int main(void) { 
    printf("Adding: %d \n", add(1));// 1 is an argument

    return 0;
}