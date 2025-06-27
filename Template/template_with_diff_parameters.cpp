#include <iostream>
using namespace std;

template <typename T> T maximum(T a, T b);

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

cout << "--------------------------------------------" << endl;
cout << "max(int) : " << maximum<int>(w,u) << endl;  // passing int & double  -> implicit convertion
cout << "max(double) : " << maximum<double>(w,v) << endl; // passing int & double
//cout << "max(string) : " << maximum<string>(v,y) << endl;  // Error as <int> to <string> not possible

 return 0;
}

template <typename T> T maximum(T a, T b)
{
    return (a>b)? a:b ;
   }