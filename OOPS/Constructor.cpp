/*

A special kind of method that is called when an instance of class is created

-> NO return type
-> Same name as the class
-> Can have parameters. Can also have an empty parameter list
-> Usually used to initialize members variables of a class

*/

#include <iostream>
using namespace std;

const double PI=3.14;

//Class Constructor

class Cylinder{

    private :
    double base_radius {1.0};
    double height{1.0};

    public:

     Cylinder(){
        base_radius=2.0;
        height= 2.0;
    }

     Cylinder( double radius_paramtr, double height_paramtr){
        base_radius=radius_paramtr;
        height=height_paramtr;

    }

    double volume(){
        return PI*base_radius*base_radius*height;
    }
};

int main()
{
   double result{};
   cout << "result : " << result << endl;
   Cylinder cylinder0;
   result=cylinder0.volume();
   cout << "result : " << result << endl;

   Cylinder cylinder1(41.4,44.5);
   result=cylinder1.volume();
   cout << "result : " << result << endl;

 return 0;
}