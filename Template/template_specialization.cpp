#include <iostream>
#include <string.h>
using namespace std;

template <typename T> T maximum(T a, T b);
//Template specialization
template<>
const char *maximum<const char *>(const char* a , const char* b){
    return (strcmp(a,b) > 0) ? a:b;
}

int main()
{
   int w=44;
   int p=84;
   double u=55.5;
   double v=88.7;
   string_view x="Rush";
   string_view y="Sush";

  
   cout << "max(int) : " << maximum(w,p) << endl;
      cout << "max(double) : " << maximum(u,v) << endl;
         cout << "max(string) : " << maximum(x,y) << endl;

    const char* g{"wild"};
    const char* h{"animal"};

    cout << "max(const char*) : " << maximum(g,h) << endl;

 return 0;
}

template <typename T> T maximum(T a, T b)
{
    return (a>b)? a:b ;
   }