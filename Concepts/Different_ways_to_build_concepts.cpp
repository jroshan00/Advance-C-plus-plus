/*

Used in c++20 and above :

template <typename T>
concept MMyIntegral = is_integeral_v <T>;

template <typename T>
concept Multipliables = requires(T a, T b){
  a*b;
};

template <typename T>
concept Incrementable = requires(T a){
a+=1;
++a;
a++;

};

*/

#include <iostream>
#include <concepts>

using namespace std;

template <typename T>
concept MyIntegral = is_integeral_v <T>;

int main()
{
    
   
   
 return 0;
}