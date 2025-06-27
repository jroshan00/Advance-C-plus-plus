#include <iostream>
using namespace std;
int main()
{
   int c{42};
   int d{55};
   int e{88};

   auto func = [&](){
    cout << "Inner Value : " << c <<" , " << d << " , "  <<e<< endl;
   };

    for(size_t i{}; i<3 ; ++i){
        cout << "outer value : " << c << endl;
         cout << "outer value : " << d << endl;
          cout << "outer value : " << e << endl;

          func();
          ++c;
          ++d;   
   }
   
 return 0;
}


/*

outer value : 42
outer value : 55
outer value : 88
Inner Value : 42 , 55 , 88
outer value : 43
outer value : 56
outer value : 88
Inner Value : 43 , 56 , 88
outer value : 44
outer value : 57
outer value : 88
Inner Value : 44 , 57 , 88

*/