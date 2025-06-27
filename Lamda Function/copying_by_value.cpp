#include <iostream>
using namespace std;

void function2(int );


int main()
{
   int c{42};
   int b{50};
cout << "__________________Lamda Function ___________________" << endl;
   auto function= [c](){
    cout << "Inner value : " << c << endl;

   };

   for (size_t i{} ; i<5 ; ++i){
    cout << "Outer value : " << c << endl;
    function();
    ++c;
   }

   cout << "\n __________________Function_________________________\n " << endl;

   for (size_t i{} ; i<5 ; ++i){
    cout << "Outer value : " << b << endl;
    function2(b);
    ++b;
   }


 return 0;
}

void function2(int c1){
    cout << "Inner value : " << c1 << endl;
   }


/*

__________________Lamda Function ___________________
Outer value : 42
Inner value : 42
Outer value : 43
Inner value : 42
Outer value : 44
Inner value : 42
Outer value : 45
Inner value : 42
Outer value : 46
Inner value : 42

 __________________Function_________________________

Outer value : 50
Inner value : 50
Outer value : 51
Inner value : 51
Outer value : 52
Inner value : 52
Outer value : 53
Inner value : 53
Outer value : 54
Inner value : 54

*/