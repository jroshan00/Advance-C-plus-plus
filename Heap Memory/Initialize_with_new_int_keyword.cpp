#include <iostream>
using namespace std;
int main()
{
   int * pnum0{new int}; //stores gargabe value
   int *pnum1{new int(12)}; 


   //lets try nullptr
   int * pnum2{new int(nullptr)};  //will show error
    

   cout<< *pnum0<<endl;
   cout<< *pnum1 <<endl;
   cout << *pnum2 << endl;


 return 0;
}