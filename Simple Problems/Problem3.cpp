// A program without using the main function
// Compile it with gcc -nostartfiles
 
#include <stdio.h>
#include<iostream>
 
void _start()
{
    printf("Inside _start\n");
    exit(0);
}