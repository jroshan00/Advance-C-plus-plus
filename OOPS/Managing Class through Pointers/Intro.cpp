#include <iostream>
#include "triangle.h"
#include "constant.h"
using namespace std;
int main()
{
    triangle* t2=new triangle();
    (*t2).set_base(7.56);           //one way or
    t2->set_height(5.23);           //another way
    t2->set_length(11.5);
    double area=t2->base_area();
    double volume=t2->volume_of_prism();

    cout << "area: " << area << endl;
    cout << "voulume : " << volume << endl;
    
    delete t2;

   
 return 0;
}