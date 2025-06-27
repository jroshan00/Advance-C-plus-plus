#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
   vector <int> v_arr;
   for(auto i=0;i<5;i++){
    v_arr.push_back(i);
   }
   cout<<"Size : "<< v_arr.size();
   cout<<endl;
   cout<< "Max size : " << v_arr.max_size()<<endl;
   cout<< "capacity : " << v_arr.capacity()<<endl;

   //empty() returns boolian value, Here is the use of it

   if(v_arr.empty()==true){
    cout << "The array is empty " <<endl;
   }else{
    cout<<"The array is not empty" <<endl;
   }
   
   //After resizing the array using resize function
   v_arr.resize(5);
   cout<< "After resizing size of v_arr : " << v_arr.size()<<endl;

   cout<< "Before shrink_to_fit capacity of v_arr : " << v_arr.capacity()<<endl;
   cout<< "Before shrink_to_fit size of v_arr : " << v_arr.size()<<endl;
   v_arr.shrink_to_fit();
   cout<< "After shrink_to_fit size of v_arr : " << v_arr.size()<<endl;
   cout<< "After shrink_to_fit capacity of v_arr : " << v_arr.capacity()<<endl;

   cout<< " _______________________The End________________________"<<endl;

 return 0;
}

/*

Size : 5
Max size : 2305843009213693951
capacity : 8
The array is not empty
After resizing size of v_arr : 5
Before shrink_to_fit capacity of v_arr : 8
Before shrink_to_fit size of v_arr : 5
After shrink_to_fit size of v_arr : 5
After shrink_to_fit capacity of v_arr : 5
 _______________________The End________________________

*/