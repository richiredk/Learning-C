/*
My journey Learning C. 
I have decided to learn C, following the classic version of The C Programming Language (1978), written by Brian Kernighan and Dennis Ritchie.
I am following the reading of the book in the video (https://www.youtube.com/watch?v=j-_s8f5K30I&t=2954s) tutorial created by freeCodeCamp (https://www.freecodecamp.org/)
and Charles Severance (Dr. Chuck - https://www.cc4e.com/).
Thank you all.
*/

/*
This is the first C program in the book which is the classic "hello world". This first program witll work (compile/run) in my linux desktop,in which I am running ubuntu 24.04.2 LTS. 
This first C program will work with the gcc compile with the -ansi option to accept the "legacy" syntax of C: gcc -ansi helloworld-ansi.c || gcc helloworld-ansi.c -ansi 
The compiltaion of the first C program will proceed and make an executable file called a.out
The running/execution of the first C program will proceed with the following:  ./a.out
The result of running/execution of the first C program will make files: a-<file-name>.o && a-<file-name>.i && a-<file-name>.s
*/

/* 
This is a modification of the c programm helloworld.c
The modification is to find another way to write the arguments in main() to print Hello, World
As a result of the experiment, the C compiler will print Hello, World 
 * The changes are inside the braces { } in  which the programm will have three printf function.
*/

#include <stdio.h>
main()
{
        printf("Hello, ");
	printf("World");
	printf("\n");
}


/* 
I have attached the assembly file a-helloworld.s 
*/
