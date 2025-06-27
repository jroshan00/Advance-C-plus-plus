
#include <iostream>
#ifndef constant_h
#define constant_h
#include "triangle.h"

using namespace std;


int main()
{
    triangle t1;
    t1.set_base(2);
    t1.set_height(4);
    t1.set_length(5);
    int len=t1.get_length();
    int bse=t1.get_base();
    int hght=t1.get_height();
    cout<< "len : " << len <<endl;
     cout<< "height : " << hght <<endl;
      cout<< "base : " << bse <<endl;

    int volume=t1.volume_of_prism();
    int area=t1.base_area();
    
    cout << volume<< endl;
    cout<< area <<endl;
    
 return 0;
}

#endif