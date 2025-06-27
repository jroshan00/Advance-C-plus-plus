//Write a program to print the prime 
//numbers of the till N and also the sum of the prime numbers 

#include <iostream>
using namespace std;

int primesum(int num){
    // cout<<"Entered number is : " << num<< endl;
    int i=2;
    int sum=0;
    // cout<< "The prime numbers are:  " << endl;
    for(i;i< num;i++){
        if(i%2!=0){
            // cout<<i<< endl;
            sum+=i;


        }
    }
    return sum;
}

int main(){
    int value;
    cout<< "Enter the value of the N : " << endl;
    cin>> value;
    int primevalue=primesum(value);
    cout<< primevalue;


    return 0;
}