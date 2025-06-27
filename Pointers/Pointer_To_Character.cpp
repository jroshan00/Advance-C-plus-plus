#include <iostream>
using namespace std;
int main()
{
   char *ptr_char_var{nullptr};
   char char_value{'A'};

   ptr_char_var=&char_value;

   cout <<"Address of char_value  "<< ptr_char_var<<endl;
   cout <<"value of char_value " << *ptr_char_var;
   cout<< endl;

   char char_value1{'V'};
   ptr_char_var=&char_value1;
   cout <<"Address of char_value1  "<< ptr_char_var<<endl;
   cout <<"value of char_value1 " << *ptr_char_var;
   cout<< endl;


   char* p_maessage{"Hello World "};
   //Printing out

   cout << "value of p_message is :  " << p_maessage <<endl;
   cout << "The value stored at p_message[1] is : " << p_maessage[1]<< endl;
   cout << "The value of *p_message is : " <<*p_maessage << endl;

 return 0;
}