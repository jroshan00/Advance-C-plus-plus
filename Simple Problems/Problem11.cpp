//Write a program to print a right angled triangle 
#include <iostream>
using namespace std;

int main(){
    int row;

    // int column;
    cout << "Enter row value : " << endl;
    cin >> row;
    // cout<<"Enter column value : " << endl; 
    // cin >> column;
    cout<< endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
    cout<<endl;
    }
    return 0;
}