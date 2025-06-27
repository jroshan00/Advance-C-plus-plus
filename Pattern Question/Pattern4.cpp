/*
Write a program to print 
   *
  ****
 ******
******** 
*/
#include <iostream>
using namespace std;
int main(){
    int u{};
    cout<< "Enter a value : " ;
    cin >> u;
    for(int i=0;i<=u;++i){
        cout<<"*"<<endl;
        for(int j=u;j>=0;--j){
            cout << " ";

        }
        u--;
    }
}