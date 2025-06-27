// A program without using the main function
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 
#define repl(a,b,c,d) a##b##c##d
#define KuchKuch repl(m,a,i,n)
 
int KuchKuch()
{
    char a[]="pyarri";
    printf("%s\n",a);

    cout << "143"<< endl;

    exit(0);
}