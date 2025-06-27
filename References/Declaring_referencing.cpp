#include <iostream>
using namespace std;
int main()
{
   int value{45};
   double double_value{33.50};

   int &ref_to_int_value1{value};
   int &ref_to_int_value2=value;
   double &ref_to_double_value{double_value};
cout<< "------------------------------------------------------"<<endl;
   cout<< "int value : " << value<<endl;
    cout<< "double value -----: " << double_value<<endl;
cout<< "------------------------------------------------------"<<endl;
     cout<< "&int value : " << &value<<endl;
    cout<< "&double value -----: " << &double_value<<endl;
cout<< "------------------------------------------------------"<<endl;
     cout<< "ref_to_int_value1 -----: " << ref_to_int_value1<<endl;
     cout<< "ref_to_int_value2 -----: " << ref_to_int_value2<<endl;
     cout<< "ref_to_double_value -----: " << ref_to_double_value<<endl;
cout<< "------------------------------------------------------"<<endl;
      cout<< "&ref_to_int_value1 ----: " << &ref_to_int_value1<<endl;
     cout<< "&ref_to_int_value2 ----: " << &ref_to_int_value2<<endl;
     cout<< "&ref_to_double_value ----: " << &ref_to_double_value<<endl;

cout<< "------------------------------------------------------"<<endl;
     cout << "sizeof(int) : " << sizeof(int) <<endl;
     cout << "sizeof(&int) : " << sizeof(int&) <<endl;
     cout << "sizeof(ref_to_int_value1) : " << sizeof(ref_to_int_value1) <<endl;
     

cout<< "------------------------------------------------------"<<endl;
 ref_to_double_value++;
cout<< "++ref_to_double_value ----: " << ref_to_double_value<<endl;

cout<< "------------------------------------------------------"<<endl;
cout<< "now double value -----: " << double_value<<endl;

 return 0;
}

/*
------------------------------------------------------
int value : 45
double value -----: 33.5
------------------------------------------------------
&int value : 0xb5d81ff994
&double value -----: 0xb5d81ff988
------------------------------------------------------
ref_to_int_value1 -----: 45
ref_to_int_value2 -----: 45
ref_to_double_value -----: 33.5
------------------------------------------------------
&ref_to_int_value1 ----: 0xb5d81ff994
&ref_to_int_value2 ----: 0xb5d81ff994
&ref_to_double_value ----: 0xb5d81ff988
------------------------------------------------------
sizeof(int) : 4
sizeof(&int) : 4
sizeof(ref_to_int_value1) : 4
------------------------------------------------------
++ref_to_double_value ----: 34.5
------------------------------------------------------
now double value -----: 34.5



*/