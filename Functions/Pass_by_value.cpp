#include <iostream>
using namespace std;

void say_age(int age); //Declaration

int main(int argc, char **argv)
{
    int age=15;

    say_age(age) ;
    cout<< endl;  //passing value to say_age
    cout << "After passing value to say_age() age = " << age << endl;


   
 return 0;
}

void say_age(int age){
    ++age; //changing the copy. Outside age not affected

    cout << "Hello! you are " << age << " years old."<< endl;

}

/*
Hello! you are 16 years old.

After passing value to say_age() age = 15
*/ 