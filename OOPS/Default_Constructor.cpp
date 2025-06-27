#include <iostream>
#include <string.h>

using namespace std;

class rectangle{
    public:
    double length{0};
    double breadth{0};
    double height{0};

    public:
    rectangle()=default;
    rectangle(double l,double b,double h){
        length=l;
        height=h;
        breadth=b;
    }

    double volume(){
        return length*breadth*height;
    }
};
int main()
{
    rectangle Rec_Area1(2,4,8);
    double vol1=Rec_Area1.volume();
     cout<< vol1;

   
 return 0;
}