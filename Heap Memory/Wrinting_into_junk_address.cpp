#include <iostream>
using namespace std;
int main()
{
   int *ptr2{}; //intialized pointer
   int num2{55};
   ptr2=&num2;
   int*ptr1; //uninialized pointer
   int num1{56};
   ptr1=&num1;
   cout<< "inialized pointer : " << *ptr2 <<endl;
   cout<< "uninialized pointer : "<< *ptr1<< endl ;
//    *ptr1=56;
//     cout << *ptr1 <<endl;
 return 0;
}