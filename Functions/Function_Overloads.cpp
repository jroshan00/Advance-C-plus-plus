#include <iostream>
#include  <string.h>
using namespace std;

/* 

Parameters differences 

ORDER
NUMBER
TYPES

*/
int maxx(int s, int t){

    return (s>t)? s : t;
}


double maxx(double s, double t){

    return (s>t)? s : t;
}

string_view maxx(string_view s, string_view t){

    return (s>t)? s : t;
}



int main()
{
   int w=444;
   int p=84;
   double u=55.0;
   double v=88.7;
   string_view x="Rush";
   string_view y="Sush";
   int value1= maxx(w,p);
   cout<< value1 << endl;

   double value2= maxx(u,v);
   cout<< value2 << endl;

   string_view value3= maxx(x,y);
   cout<< value3 << endl;
 return 0;
}