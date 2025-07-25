/*
My journey Learning C. 
I have decided to learn C, following the classic version of The C Programming Language (1978), written by Brian Kernighan and Dennis Ritchie.
I am following the reading of the book in the video (https://www.youtube.com/watch?v=j-_s8f5K30I&t=2954s) tutorial created by
freeCodeCamp (https://www.freecodecamp.org/) and Charles Severance (Dr. Chuck - https://www.cc4e.com/).
Thank you all.
*/

/*
This is the first C program in the book which is the classic "hello world". This first program witll not work (compile) in my linux desktop,
in which I am running ubuntu 24.04.2 LTS, because the standard is too old. 
The problem: I try to compile (as shown below) in terminal. There is warning in the output:
	$ gcc helloworld.c -o helloworld
	  helloworld.c:15:1 warning: return type defaults to 'int' [-Winplicit-int]
		15 | main()

Modifications to the first C program are necessary. 
The Modification to implement, in order to make it work (compile/run), is to add the (reserved) word "int".
*/

#include <stdio.h>
int main()
{
	printf("Hello, world\n");
}

