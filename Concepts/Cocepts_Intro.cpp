/* 

A mechanism to place constraints on your template type parameters.

-> Standard built in concepts :

same_as : specifies that a type is the same as another type
derived_from : specifies that a type is derived from another type 
convertible_to : specifies that a type is implicitly convertible to another type
common_reference_with : specifies that rwo types shares a common reference type
common_with : specifies that two types share a common type
integral : specifies that a type is an integral type
signed_integral : specifies that a type is an intergral type that is signed
unsigned_integral : specifies that  a type is an integral that is unsigned
floating_integral : specifies that a type is floating point type

Note : Used in C++ 20

template <typename T>
requires std::integral <T>
T add (T a, T b){
return a+b;
} 

*/

#include <iostream>
using namespace std;

template <typename T> add (T a, T b){
return a+b;
} 

int main()
{

    char a_0{10};
    char a_1{21};

    auto result_a = add(a_0,a_1);

    cout << " result_a = add(a_0,a_1) : " << static_cast<int>(result_a) << endl;


    int b_0{11};
    int b_1{5};

    auto result_b = add(b_0,b_1);

    cout << "  result_b = add(b_0,b_1) : " <<result_b << endl;

    double c_0{11.1};
    double c_1{55.8};

    auto result_c = add(c_0,c_1);

    cout << "  result_c = add(c_0,c_1) : " << result_c << endl;

   
 return 0;

}


/*

result_a = add(a_0,a_1) : 31
result_b = add(b_0,b_1) : 16
result_c = add(c_0,c_1) : 66.9

*/