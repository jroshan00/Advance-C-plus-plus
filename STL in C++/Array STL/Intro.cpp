#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <int,9> Example ={1,2,3,4,5,6,7};
    cout <<"Example.size() : "<< Example.size()<< endl;
    cout <<"Example.max_size() : "<<Example.max_size()<< endl; 
    cout <<"Example.front() : "<< Example.front()<< endl;
    cout <<"Example.back() : "<< Example.back()<< endl;
    cout <<"Example.at() : "<< Example.at(2)<< endl;
/*
Example.size() : 9
Example.max_size() : 9
Example.front() : 1
Example.back() : 0
Example.at() : 3
*/

    cout <<"Example.empty() : "<< Example.empty()<< endl;
    const int xy=4;
    array <int, 10> example1{};
    example1.fill(1113333);
    cout<< example1[0]<<","<<example1[1]<< ","<< example1[2]<< ","<<example1[3];
   
 return 0;
}