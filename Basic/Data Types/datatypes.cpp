#include <iostream>
using namespace std;
 
int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
 
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
 
    cout << "Size of double : " << sizeof(double) << endl;
    
    cout << "______________________________________"<<endl;
    
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    cout << character1 <<endl;
    cout << character2 <<endl;
    cout << character3 <<endl;
    cout << character4 <<endl;
    cout << character5 <<endl;
    cout << "______________________________________"<<endl;

    //One byte in a memory : 2^8 =256 different values (0 ~ 255)

    char A=65;
    
    cout<< A <<endl;
    cout << static_cast<int>(A) <<endl;

    cout << "______________________________________"<<endl;

 
    return 0;
}