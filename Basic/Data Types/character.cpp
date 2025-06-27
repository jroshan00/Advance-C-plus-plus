/*
ASCII was among the first encodings to represent text in a computer.
It falls short when it comes to representing languages other than English and a few western languages.
Think Arabic, East Asian Languages like Japanese, Chinese ....
There are better ways to represent text that is meant to be seen in different
languages, one of the most common being Unicode
just know that 
it's a robust way to represent text in different languages for a computer
*/
#include <iostream>
using namespace std;
int main(){

    char character1 {'a'};
    char character2 {'b'};
    char character3 {'c'};
     cout << "size of the character is : "<< sizeof(character1) <<"\t" << character1 << endl;
     cout << "size of the character is : " << sizeof(character2)<<"\t"<< character2 << endl;
     cout << "size of the character is : "<< sizeof(character3) <<"\t"<< character3 << endl;

/*
another example of character is that if we store a numeric value using char 
then c++ will store the value of character according to the 
ASCII standard value 

*/
//for example 

char value=65; //ASCII code for A
cout<< "value: " << value << ",  size of the value : " << sizeof(value) << endl;
//static_cast is used to cast the value in int type from  char type
cout << "value(int) : " << static_cast<int>(value) << endl;

}