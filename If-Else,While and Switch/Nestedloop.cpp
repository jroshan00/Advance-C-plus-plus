#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter a number1 : " ;
    cin>> num1;
    cout << "Enter a number2 : " ;
    cin>> num2;

    if(num1>num2){
        if(num1<100){
            cout<< "The number 1 is greater than number 2 but less than 100 " <<endl; 
        }
        else if(num1==100 || num1==500){
            cout << "The number is either equal to 100 or 500 " <<endl;
        }
        else if(num1>100 && num1<500){
            cout<< "The number 1 is greater than number 2 as well as 100  " <<endl;
        }
        else if(num1==1000){
            cout << "The number is equal to 1000 " <<endl;
        }
        else if(num1>500 && num1<1000){
            cout << "The number is greater than 100 but less the 500" <<endl;

        }
        else {
            cout<< "The number1 is greater than number 2";
        }

    }
    else{
        cout << "The number 2 is greater than number 1 ";
    }

    return 0;
    
}