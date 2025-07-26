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
The problem: Compile the program (as shown below) in terminal. There is warning in the output:

	$ gcc helloworld.c -o helloworld
	  helloworld.c:15:1 warning: return type defaults to 'int' [-Winplicit-int]
		15 | main()

Modifications to the first C program are necessary. 
The Modification to implement, in order to make it work (compile/run), is to add the (reserved) word "int".
 
After implementing the modification the program compile and run:
	$ gcc helloworld.c -o helloworld
	$ ./helloworld
	$ Hello, world
	$
*/

/*
This is a modification of the first C programm helloworld.c
The modification is meant to find another way to add a newline character into the printf function.
	#include <stdio.h>
	int main()
	{
	        printf("Hello, world
	               ");
	} 

As a result of the experiment, the C compiler will print unfriendly diagnostics about missing quotes (as shown bellow):
	$ gcc helloworld2.c -o helloworld2
	helloworld2.c: In function ‘main’:
	helloworld2.c:28:16: warning: missing terminating " character
	   28 |         printf("Hello, world
	      |                ^
	helloworld2.c:28:16: error: missing terminating " character
	   28 |         printf("Hello, world
	      |                ^~~~~~~~~~~~~
	helloworld2.c:29:17: warning: missing terminating " character
	   29 |                 ");
	      |                 ^
	helloworld2.c:29:17: error: missing terminating " character
	   29 |                 ");
	      |                 ^~~
	helloworld2.c:30:1: error: expected expression before ‘}’ token
	   30 | }
	      | ^
	helloworld2.c:28:16: error: expected ‘;’ before ‘}’ token
	   28 |         printf("Hello, world
	      |                ^
	      |                ;
	   29 |                 ");
	   30 | }
	      | ~   

*/


/*
This is the C program that compile and run without errors/warnings:
	#include <stdio.h>
	int main()
	{
		printf("Hello, world\n");
	}
*/

/* 
This is a modification of the first C programm helloworld.c
The modifications are inside the braces {}, in which the program will be practicing the use of escape sequences of:
\\ (backslash) It is used to insert backslash character.
*/

#include <stdio.h>
int main()
{
	printf("\\Hello\\, \\World\\\n");
}
