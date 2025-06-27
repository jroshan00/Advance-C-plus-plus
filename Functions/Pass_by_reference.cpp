#include <iostream>
using namespace std;

void say_age(int &age);
int main()
{
    int age{23};
    cout <<  "age - before : " << age << endl;
    say_age(age);
    cout <<  "age - after : " << age << endl;
   
   

 return 0;
}

void say_age(int & age){
    ++age;
    cout << "Hello you are " << age << " years old."<< endl;
}