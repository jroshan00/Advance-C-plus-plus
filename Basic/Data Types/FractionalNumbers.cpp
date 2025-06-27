/*

Fractional numbers are also known as floating point types
used to represent numbers with fractional parts in C++
There are basically three types od data types 1) Float (4 bits) precision is upto 7
                                              2) double (8 bits) precision is upto 15
                                              3) long double (12 bits) greater than double

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   //float value1=1.258945/0;   //warning: division by zero [div-by-zero]
   float value1=1.25894568768f; //this is to be noted that if f is not considered then the number is stored as double 
   double  value2=1154e10;  //double is default
   long double value3=2.64686546546L; //long double has high precision
cout<< "_____________________________" << endl;
//    cout<< setprecision(10); // a function that sets the precision of output to 20
   cout<< "Float of size :"<< sizeof(value1) <<" Having value  : "<< value1 <<endl;  //if division by zero then the output will be "inf"
   cout <<"Double of size :"<< sizeof(value2)<<" Having value  : "<< value2 << endl;
   cout <<"long Double of size :"<< sizeof(value2)<<" Having value  : "<< value3 << endl;

cout<< "_____________________________" << endl;

   float number4=0.1236f;
   cout<< number4 << endl;

return 0; 

}

