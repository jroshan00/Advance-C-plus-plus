#include <iostream>
using namespace std;
int main()
{
   int *p_array{new int[10]{1,2,5,8}};
   for (size_t i{}; i<10; ++i){
    cout<< p_array[i]<<" ,";
   }
   cout<< endl;
   
   delete[]  p_array;
   p_array=nullptr;
   
   if(p_array){
    cout<< " grabage values are allocated";
   } else{
    cout << " Null values Checked";
   }

   cout<< endl;

   for (size_t i{}; i<10; ++i){         //p_array=nullptr; will not allow run this
    cout<< p_array[i]<<" ,";
   }
 return 0;
}