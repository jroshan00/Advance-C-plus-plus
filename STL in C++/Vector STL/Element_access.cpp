#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the Value : ";
    cin>>i;
    vector<int> v_array;
    
    for(int it=1; it<i;it++){
        v_array.push_back(it);
    }

    cout<< "Returns a reference to the element at position given in vector : " << v_array.at(4)<<endl;

    cout<< "Returns a reference to the first element in vector : " << v_array.front()<<endl;

    cout<< "Returns a reference to the back element in vector : " << v_array.back()<<endl;

    cout<< "Returns a reference to the data element in vector : " << v_array.data()<<endl;


 return 0;

}

/*

Enter the Value : 8
Returns a reference to the element at position given in vector : 5
Returns a reference to the first element in vector : 1
Returns a reference to the back element in vector : 7
Returns a reference to the data element in vector : 0x21d7fa71390

*/