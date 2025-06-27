#include <iostream>
using namespace std;

void say_age(int* age);

int main()
{
    int age{23};
    cout << " age - brfore : " << age << endl;
    say_age(&age);
    cout << " age - after : " << age << endl;
   
 return 0;
}

void say_age(int* age){
    ++(*age);

    cout << "Hello! you are "<< *age << " years old" << endl;
     
}

/*

Pass_by_pointer.cpp -o Pass_by_pointer } ; if ($?) { .\Pass_by_pointer }
age - brfore : 23
Hello! you are 24 years old
age - after : 24

*/
