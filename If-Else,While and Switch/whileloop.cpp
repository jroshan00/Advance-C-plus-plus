//Write a program to print the table of the given number taken as input N 
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int y=1;
    cout<< "Table of : " << x << endl;

    while(y<=10){
        cout << x << " * " << y << " = " << x*y << endl;
        y+=1;
    }
}