/*
This is the keyword that 
let the compiler deduce the type
*/

#include <iostream>
using namespace std;

int main()
{
    auto var1=12;  // interpret as int of size 4 bytes (Integer)
    auto var2=13.0; //interpret as int of size 8 bytes (double)
    auto var3=14.0f; //interpret as int of size 4 bytes (float)
    auto var4=15.0l; // interpret as int of size 16 bytes ()
    auto var5='e';

    //int modifier suffix
    auto var6 {123u}; //unsigned
    auto var7 {123ul}; //unsigned long
    auto var8 {123ll}; //long long

    cout<< "size of data var2: " << sizeof(var2) << endl;
    cout<< "size of data var1: " << sizeof(var1) << endl;
    cout<< "size of data var3: " << sizeof(var3) << endl;
    cout<< "size of data var4: " << sizeof(var4) << endl;
    cout<< "size of data var5: " << sizeof(var5) << endl;
    cout<< "size of data var6: " << sizeof(var6) << endl;
    cout<< "size of data var7: " << sizeof(var7) << endl;
    cout<< "size of data var8: " << sizeof(var8) << endl;


}