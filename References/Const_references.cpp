#include <iostream>
using namespace std;
int main()
{
   int age{};
   age=55;
    cout << "_____________________"<<endl;
   const int &ref_age{age};
   cout<< "age : " << age << endl;
   cout<< "ref_age : " << ref_age <<endl;
   
   age++;

   cout << "_____________________"<<endl;
   cout<< "age : " << age << endl;
   cout<< "ref_age : " << ref_age <<endl;
   
    cout << "_____________________"<<endl;


      

/*
   
    const int * const_ptr_to_age{&age};
    cout <<" * const_ptr_to_age : "<< *const_ptr_to_age<< endl;

    * const_ptr_to_age=32; //cleary cosnt ptr doesnot allow to modify 
    cout <<" * const_ptr_to_age : "<< *const_ptr_to_age<< endl;
    cout <<"Program Ends Here " << endl;

//Output : 

//     onst_references.cpp:24:23: error: assignment of read-only location '* const_ptr_to_age'
//    24 |     * const_ptr_to_age=32;
//       |     ~~~~~~~~~~~~~~~~~~^~~

*/


/*  

   ref_age++;    //it will show error as of constant reference
  
  
   cout << "_____________________"<<endl;
   cout<< "age : " << age << endl;
   cout<< "ref_age : " << ref_age <<endl;
   cout << "_____________________"<<endl;

*/

 return 0;
}

/*
_____________________
age : 55
ref_age : 55
_____________________
age : 56
ref_age : 56
_____________________
_____________________
age : 56
ref_age : 56
_____________________

*/