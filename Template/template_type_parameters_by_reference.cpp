#include <iostream>
using namespace std;

template <typename R> R maximum(R a , R b){

    cout << "IN - &a " << &a<< endl; 
    return (a>b)? a:b;
}

template <typename R> R minimum(R &a , R &b){

    cout << "IN - &a " << &a<< endl; 
    return (a<b)? a:b;
}


int main()
{

    double a {22.8};
    double  b{51.55};

cout << "\nTemplate parameters pass by value  \n " << endl;
    cout << "OUT &a " <<  &a << endl;
    double max1 = maximum(a,b);

    cout << max1;

cout << "\nTemplate parameters pass by reference \n " << endl;
   cout << "OUT &a " <<  &a << endl;
   double MIN2 = minimum(a,b);
   cout << "MIN2 : "<<MIN2 << endl <<"address of MIN1 " << &MIN2 << endl;
   
 return 0;
}

/*
Template parameters pass by value

OUT &a 0x14481ff908
IN - &a 0x14481ff8e0
51.55
Template parameters pass by reference

OUT &a 0x14481ff908
IN - &a 0x14481ff908
22.8

*/