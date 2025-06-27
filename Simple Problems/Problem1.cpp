// Write a program to check weather the number is positive, negative or zero

#include <iostream>
using namespace std;

int Check(int a)
{
    if(a>0)
    {
        cout<< "The Number is Positive" <<endl;
    }
    else{
        cout<< "NO Positive " << endl;
    }
    if(a<0)
    {
        cout<< "The Number is negative" <<endl;
    }
    else{
        cout<< "NO Negative " << endl;
    }
    if(a==0)
    {
        cout<< "The Number is zero" <<endl;
    }
    else{
        cout<< "NO Zero " << endl;
    }

    return a;
}


int main(){

    int a;
    cin >> a ;
    Check(a);


    return 0;



}
