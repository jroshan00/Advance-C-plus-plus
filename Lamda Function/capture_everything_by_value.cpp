#include <iostream>
using namespace std;
int main()
{
   int c{42};
   int d{55};
   int e{88};

   auto func = [=](){
    cout << "Inner Value : " << c <<" , " << d << " , "  <<e<< endl;
/*
Output :
 
 Inner Value : 42 , 55 , 88
*/
   };


   func();

   
 return 0;
}