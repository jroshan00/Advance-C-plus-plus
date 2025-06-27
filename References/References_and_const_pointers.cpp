#include <iostream>
using namespace std;
int main()
{
   double double_value{55.788};
   double other_double_value{55.7};
   
   double *const const_p_double_value {&double_value};

   const_p_double_value = other_double_value;  // Error

 return 0;
}