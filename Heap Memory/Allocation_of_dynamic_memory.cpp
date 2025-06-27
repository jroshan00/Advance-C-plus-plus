#include <iostream>
using namespace std;



int main()
{
   //Allocation of dynamic space for a single int on the heap
   //This memory belongs to our program from now on.

   int *p_num4{nullptr};
   p_num4 = new int;


   *p_num4=77; // Writing into dynamically memory



   cout<< "Dynamically allocated memory "<<endl;
   cout<<"p_num4 --> " << *p_num4 <<endl;

   delete p_num4;
   
   cout<< "printing p_num4 after deleting before nullifying the memory in Heap --> " << p_num4 <<endl;
   
   p_num4=nullptr;

   cout<< "printing p_num4 after deleting after nullifying the memory in Heap --> " << p_num4;
 return 0;
}