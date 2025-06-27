#include <iostream>
#include <iostream>
using namespace std;


//See return by reference as optimized feature of compiler
string add_strings( string str1, string str2){
    string result = str1 + str2 ;
    cout << "In : &result(string) : " << &result << endl;
    return result;
   }

//return by value by default 

int add_numbers(int num1, int num2 ){
    int sum= num1 + num2 ;
    cout << "In : &sum(int) : " << &sum << endl;
    return sum;
}

int main()
{
    string str_result = add_strings(string("Hello"), string("World!")); //copies the value and address
    cout << "Out &result : " << &str_result << endl;

    int result= add_numbers(5,8);  //coopies the value at diff address
    cout << "Out : &sum(int) : " << &result << endl;


    return 0;
}

/*
See return by reference as optimized feature of compiler
In : &result(string) : 0x5aa89ff670
Out &result : 0x5aa89ff670

See return by value 

In : &sum(int) : 0x5aa89ff62c
Out : &sum(int) : 0x5aa89ff66c

*/