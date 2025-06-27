//Write a program to print a sum of even number upto a number N given as Input
#include <stdio.h>
#include <iostream>
using namespace std;

int evensum(int x){
    int sum=0;
    int i=2;
    for (i;i<=x;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int num;
    cin>> num;
    int evenumbersum = evensum(num);

    cout<< " The sum of even number is :"<< evenumbersum;
    return 0;
}