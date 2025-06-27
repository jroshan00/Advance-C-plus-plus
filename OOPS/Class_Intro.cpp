/*
-> Class members variables can either be raw stack variables or Pointers
-> Members cant be references
-> Classes have functions (methods) that let them do things
-> Class methods have access to the member variables, regardless of whatever they are public or private
-> Private members of classes (variables and functions) are not accessible from the outside of the class.


*/

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

const double PI=3.14;

class Cylider {
    

    public :
     double base_radius{};
     double height{};

    public :

    double volume(){
        return PI *base_radius*base_radius*height;
    }


    double Area(){
        return PI *base_radius*base_radius;
    }
};


int main()
{

    Cylider c1;

    cout << c1.volume() << endl;

    c1.base_radius=2.5;
    c1.height = 12.6;

    cout << "volume c1 : " << c1.volume() << endl;

    c1.base_radius=0;
    cout << "volume c1 : " << c1.volume() << endl;

    Cylider c2;
     c2.base_radius=11.1;

      cout << "Area c2 : " << c2.Area() << endl;
    //   cout << "c2.base_radius : " << c2.base_radius << endl;
    //   cout << "c2.height  : " << c2.height << endl;

   
 return 0;
}