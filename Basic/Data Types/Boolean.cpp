#include <iostream>
using namespace std;
int main()
{
    bool red_light {true};  //a boolean is of 8 bits or a byte
    bool green_light {false}; 

    //Printing out Bool
    //1 -->true
    //2 -->flase

    cout << "The size of bool :" << sizeof(bool) << endl;
    cout << "The ouput for the red_light is :" << red_light << endl;
    cout << "The ouput for the red_light is :" << green_light << endl;

    //Print out true and false

    cout<< endl;
    cout << boolalpha;
    cout << "The ouput for the red_light is :" << red_light << endl;
    cout << "The ouput for the red_light is :" << green_light << endl;


cout << "________________________________" << endl;
    if(red_light == true)
    {
         cout << " PLEASE STOP!! " << endl;

    }
    else
    {
         cout << "YOU CAN GO!!" <<  endl;
    }

cout << "________________________________" << endl;

    if(green_light)
    {
        cout << "The light is green" << endl;
    }
    else
    {
        cout<< "The light is not green" << endl;
    }
    return 0;
}