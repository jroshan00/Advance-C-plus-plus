#include <iostream>
using namespace std;
int main()
{
   int int_var{43};
   int *p_int= &int_var ;

   cout<<" int_var -->"<< int_var <<endl;

   cout<< "  p_int (Address in memory) for int_var  -->" << p_int <<endl;
   cout<< " Value of int_var by dereferencing (*p_int)  -->  " << *p_int <<endl;

   //you can also change the adress stored in pointer at any time

   int var2{665};
   p_int=&var2;
   cout<<" var2 -->"<< var2 <<endl;
   cout << " Different address stored in pointer  (p_int) for var2  " << p_int <<endl<< "\n";


   //The variable used here with * shows pointers

   //Cant cross assign between pointers of different type 

   int* ptr{nullptr};
   int double_num{66};

   ptr=&double_num; //compiler error will show if double is declared in double_num

   cout<< "__________Value of (ptr=&double_num) ____  \n"<< endl << ptr <<endl<<endl;


  //  int *p_number4;  //Uninialized pinter can read junk adress
   //cout<< *p_number4 <<" Uninialized pinter can read junk address ->" << p_number4<<endl;
   int *p_number5{nullptr};
   cout<< *p_number5 <<" Inialized pinter has null address ->" << p_number5<<endl;
   int gum=56;
  // p_number4=&gum;
  int num=56;
  p_number5=&num;
   
   cout<< "Writing into inialized pointer " << endl;

   cout<<  p_number5<<"---------->"<< *p_number5 << "----------> " << &num <<endl;
   
   cout<< "Writing into uninialized pointer " << endl;
   //cout<< p_number4 <<"----------> "<< *p_number4 << "---------->" << &gum <<endl;





 return 0;
}