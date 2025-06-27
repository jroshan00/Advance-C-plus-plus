#include <iostream>
using namespace std;
int main()
{
    int p_numbers;
    p_numbers=54;
    int *ptr{};
    double *hy{};

    cout<<ptr<<endl;
    cout<<hy<<endl;

    cout<<"sizeof(ptr) --> "<< sizeof(ptr)<<endl;
    cout<<"sizeof(hy) --> "<< sizeof(hy)<< endl;

    int*ptr1{nullptr};
    double *hy1{nullptr};

    cout<< ptr1<<endl;
    cout<< hy1<<endl;

    cout<<"sizeof(ptr1) --> "<< sizeof(ptr1)<<endl;
    cout<<"sizeof(hy1) --> "<< sizeof(hy1)<< endl;


    int* var1,var2,var3;

    cout<< "var1 --> "   << var1<< endl;
    cout<< "var2 --> "   << var2<< endl;
    cout<< "var3 --> "   << var3<< endl;


 return 0;
}
