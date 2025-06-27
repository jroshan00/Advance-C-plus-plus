// Write a program in C++ to check whether a number is prime or not.
// Sample Output:
// Input a number to check prime or not: 13
// The entered number is a prime number.

#include <iostream>
using namespace std;


int main(){
    long long int number;  // long long allows the user to get results for big numbers uif not used the results will be not accurate
    int count=0;
    int i=0;
    cin >> number;
        // if(number%2==0){
        //     if(number==2)
        //     cout<< " The Entered number is prime number " << endl;
        //     else
        //     {
        //     cout<< " NOT A PRIME " << endl;
        //     }
        // }
        // else {
        //     cout << "The Entered number is prime number " << endl;
        // }
        for(int a=1;a<=number;a++)
        {
                if(number%a==0){
                    count++;

                }
        }
        
        if(count ==2)
        {
            cout << "The given number is prime number " << endl;
        }
        else 
        {
            cout << "Not a prime " << endl;
        }

}