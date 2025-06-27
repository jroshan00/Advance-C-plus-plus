//Write a to program to check weather the Value entered is a of Lower Case ,Upper Case or Numeric 
// if other returns the ascii value

#include <iostream>
#include <vector>
using namespace std;

int check(char ch){
    int value=static_cast<int>(ch);
    if(65<=ch && ch<=90){
        cout<< "The Value entered is of Upper Case Alphabate" << endl;
        
    }
    else if(48<=ch && ch<=57){
        cout << "The Value entered Numeric"  ;
    }
     else if(97<=ch && ch<=122){
        cout << "The Value entered is Of Lower Case Alphabate" ;
     }

     else{
        cout << "Please use google to check for the ascii value: " << value << endl;
     }

    return 1;

}

int main(){
    char ch;
    cin>> ch;
    check(ch);

    // cout<< static_cast<int>(ch);

    return 0;
    


}