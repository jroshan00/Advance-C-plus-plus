
#include <iostream>
#include "person.h"

class engineer: public person
{
    public:
    using person::person;  //Inheriting constructor
};


int main()
{

    engineer en1("Roshan","Pandey");
    cout << en1.get_fname() << " ";
    cout << en1.get_lname();
   
 return 0;
}