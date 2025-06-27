#include <iostream>
using namespace std;
int main()
{  

    cout<< "Example of memory leak \n "<<endl;

   int *p_numbr{ new int{67}}; //points to some address lets sat address 1
    cout <<"At address :: " << p_numbr<<":: value ::"<<*p_numbr<<endl;

   //should delete and reset here 

   int number{55}; //lives at address 2

   p_numbr =&number; // Now pointer points to address2, address 1 is still 

                      // In use by our program has lost access to that memory allocation.
                      //memory has been leaked.

  cout <<"At address :: " << p_numbr<<":: value ::"<<*p_numbr<<endl;


  //Double allocation
  
  cout<< "\n Double Allocatoion example "<<endl;
  int *p_number1{new int{55}};
  
  //use the pointer
  //should delete amd reset here
  
  cout<< "Memory address then : "<< p_number1 << " :: value  ::"<< *p_number1<<endl;
  
  p_number1=new int{44}; //memory with int{55} is leaked

  cout<< "Memory adress now : "<< p_number1 << " :: value  ::"<< *p_number1<<endl;

   //Pointer in local variable
   //as pointer will die due to scope mechanism and adress to the dynamic memory will be lost

cout<<"\n Pointer in local variable" <<endl;

{
    int *p_num4{new int{77}};
    // delete p_num4;
}
//Memory with int{77} leaked
cout<< "Memory with int{77} leaked "<< endl;


 return 0;
}