/*
Write a program to print the following pattern 
1111
2222
3333
4444
*/

#include <iostream>
using namespace std;

int main(){
    int rows;
    int i=1;
    cin>> rows;
    while(i<=rows){
        int j=1;
        while(j<=rows){
            cout<<i;
            j++;
        }
        cout<< endl;
        i++;

    }
}
