#include <iostream>
using namespace std;
int main()
{
   //Case 1:Uninitialized Pointer
/*
   int *pointer;
   cout<< "Case 1: Uninitialized Pointers ->" <<pointer<<endl;
   cout<< "Dereferencing the pointer -> ";
   cout<< "Shows garbage value in every execution ->" <<*pointer<<endl;
   cout<< "Program ends here " ;
*/

/*

//Case 2 Multiple Pointers pointing to same address :

int *pnum{new int{22}};
int *pnum1{pnum};


cout<<"Value of *pnum : " << *pnum << " At Address : " << pnum<<endl;
cout<<"Value of *pnum1 : " << *pnum1 << " At Address : " << pnum1<<endl;

delete pnum;

//pnum1 will store a garbage value
cout<<"After deletion of pnum -> "<<"Value of *pnum1 : " << *pnum1 << " At Address : " << pnum1<<endl;
*/

//Case 3: Deleted pointers :

cout<<"Case : 3  Deleted pointers "<< endl;
int* ptr_num{new int{55}};
cout << " *ptr_num before deletion--> "<< " address :" << ptr_num<< "  "  << *ptr_num<< endl;
delete ptr_num;
cout << " *ptr_num after deletion ---> " << " address : " << ptr_num<< "  " << *ptr_num<< " < --Now Stores garbage value  " << endl;
ptr_num=nullptr;
cout<<" After nullifying ptr_null stores address-> " << ptr_num << endl; //if you try to fetch value at *ptr the program will crash
cout<<  "------------Program Ends Here -------------" << endl;



 return 0;
}