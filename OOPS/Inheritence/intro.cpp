/*
-> A defining feature of object oriented programming in c++.
-> building types on top of other types.
-> inheritance hierarchies can be set up to suit your needs.
-> Code reuses is im.proved.


-> With public inheritance, derived classes can access and use public members
of the base class, but the derived class cant directly access private members

->The same also applies to friends of the derived class. They have access to private
members of derived, but dont have access to the base class

*/

#include <iostream>
#ifndef string_h
#define string_h
#include"person.h"
 

int main()
{
    player person1("Basketball");
    person1.set_fname("Roshan");
    person1.set_lname("Pandey");

    std:: cout << "Player : " << person1 << std::endl;
   
 return 0;

}

#endif