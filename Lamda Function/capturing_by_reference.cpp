#include <iostream>
using namespace std;

// void function2(int &c1);

int main()
{
    int c{42};
   int b{50};
cout << "__________________Lamda Function ___________________" << endl;
   auto function= [&c](){
    cout << "Inner value : " << c << endl;

   };

   for (size_t i{} ; i<5 ; ++i){
    cout << "Outer value : " << c << endl;
    function();
    ++c;
   }

//    cout << "\n __________________Function_________________________\n " << endl;

//    for (size_t i{} ; i<5 ; ++i){
//     cout << "Outer value : " << b << endl;
//     function2(b);
//     ++b;
//    }


 return 0;
}

// void function2(int &c1){
//     cout << "Inner value : " << c1 << endl;
//    }