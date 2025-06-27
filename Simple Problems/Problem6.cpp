// Compile it with gcc -nostartfiles
 
#include <stdio.h>
#include<iostream>
 
int _start()
{
    printf("Inside _start\n");
    exit(0);
}