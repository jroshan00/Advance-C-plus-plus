#include <iostream>
using namespace std;
int main()
{
   cout << "Non Const Reference : " << endl;
   int age{27};
   int & ref_age{age};

   cout<< "age : " << age << endl;
   cout<< "ref_age : " << ref_age <<endl;

   // We can modify original variable through references

   cout <<endl;

   ref_age++ ;

   cout<< "age : " << age << endl;
   cout<< "ref_age : " << ref_age <<endl;


 return 0;
}