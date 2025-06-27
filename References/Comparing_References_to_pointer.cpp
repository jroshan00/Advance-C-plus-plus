#include <iostream>
using namespace std;
int main()
{
   double double_value{12.45};
   double& ref_to_double{double_value};  //Reference to double value
   double* p_double_value {&double_value}; //Pointer to double value

   //Reading
   cout<< "double value : "<< double_value<< endl;
   cout<< "&double value : "<< &double_value<< endl;
   cout<< "ref to double value : " << ref_to_double << endl;
   cout << " p_double_value  : "  << p_double_value <<endl;
   cout<< " *p_double_value : "  << *p_double_value <<endl;



  cout<< "\n When Pointer *p_double_value is changed \n " ;

   *p_double_value =55.0;

   cout<< " *p_double_value : "  << *p_double_value <<endl;

   cout<< "\n When reference value ref_to_double is changed \n " ;
   
   ref_to_double = 18.44;

   cout<< "ref to double value : " << ref_to_double << endl;

   cout<< " Now double value : "<< double_value<< endl;


 return 0;
}

/*
double value : 12.45
&double value : 0x6f325ff998
ref to double value : 12.45
 p_double_value  : 0x6f325ff998
 *p_double_value : 12.45

 When Pointer *p_double_value is changed
 *p_double_value : 55

 When reference value ref_to_double is changed
 ref to double value : 18.44
 Now double value : 18.44
 
 */