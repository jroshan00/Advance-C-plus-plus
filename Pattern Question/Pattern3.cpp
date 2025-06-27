/*
Write a program to print the following pattern 

123
456
789

*/
#include <iostream>
using namespace std;

int main(){
    int rows;
    cin>>rows;
    int i=1;
    int count=1;

    while(i<=rows){
        int j=1;
        while(j<=rows){
            cout<< count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
