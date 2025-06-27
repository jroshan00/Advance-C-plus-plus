/*
Write a program to create the following program :

****
****
****
****

*/

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter The Number of rows " <<endl;
    cin >> rows;
    int i=1;
    while(i<=rows){
        int j=1;
        while(j<=rows){
            cout<<"*";
            j++;
        }
        cout<< endl;
        i++;
    }
}