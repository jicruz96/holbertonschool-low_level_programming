# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

### Who invented C
Dennis Ritchie

### Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
These folks worked for Bell Labs and GE to design the UNIX
framework. Linus Torval is the creator of Linux, which is an operating system inspired by UNIX

### What happens when you type gcc main.c

#### What is gcc ?
* gcc is a compiling program.
* a compiler turns our code into machine code

#### The four steps of gcc
* The preprocessor "prepares" the file for compilation. It does the following things: It does a "copy/paste" of the contents of any included header files (if I have #include <stdio.h>, then the preprocessor will copy the contents)). The preprocessor removes comments and anything else unnecessary.

```
gcc -E main.c
```

* Compilation:
Compiles code to an Intermediate Representation

```
gcc -S main.c
```

* Assembly: 
Compiles code to machine code (binary). The resulting file is called an object file and end with .o 

```
gcc -c main.c
```

* The linker:
The linker connects object files together to form the program

## What is an entry point

The entry point is the first thing we do, in C...

## What is main

The entry point for our program

## How to print text using printf, puts and putchar
If I want to print "Hello World!" followed by a new line, this how I would do it:

### printf
```
printf("Hello World\n");
```
### puts
```
puts("Hello World");
```

### putchar
In C, characters are written with single quotes.
'' = char
" " = string

```
putchar('H');
putchar('e');
...
putchar('\n');
```

## How to get the size of a specific type using the unary operator sizeof

```
int var; <--- tamaño de 4 bytes (en una computadora 64-bit)
long int longvar;

sizeof(var) ---> 4
sizeof(longvar) ---> 8
```


## If I say gcc main.c , the resulting file is called ...
a.out

## How to find the right header to include in your source code when using a standard library function
I Google it.

## How does the main function influence the return value of the program
Whenever you declare a function, you also declare what the function returns.
For example:
```
int main() --> returns int
void main() --> do not return anything
```







