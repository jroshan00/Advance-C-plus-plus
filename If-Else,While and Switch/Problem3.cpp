// Write a program in C++ to display n terms of natural numbers and their sum.
// Sample Output:
// Input a number of terms: 7
// The natural numbers upto 7th terms are:
// 1 2 3 4 5 6 7
// The sum of the natural numbers is: 28

#include <iostream>
using namespace std;


int main(){
    int number;
    int sum=0;
    int exceed =0;
    cout << "Enter 7 to get the 7th terms form intial number : " ;

    cin >> number;

    int initial;
    cout << "Enter the Number to start with : "<< endl;;
    cin >> initial;
    cout << "The Natural Numbers are :" << endl;;
    if (initial ==0){
        while(initial<number){
        cout << initial << " " ;
        sum+=initial;
        initial +=1;
        }

    }
    else if (initial!=0){
        exceed=number + initial;
        while(initial<exceed){
        cout << initial << " ";
        sum+=initial;
        initial +=1;
        }

    }
    cout << endl;
    cout << "The value of sum : " << sum;

    return 0;
}
