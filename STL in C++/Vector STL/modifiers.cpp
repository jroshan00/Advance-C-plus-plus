#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void print(vector <int> name){
    int size=name.size();
    if(name.empty()==false){
        for(int i=0;i<size;i++){
        cout<< name[i]<<" ";
    }

    cout<<endl;


    }else{
        cout<< "Array is empty"<<endl;

    }
    
}


int main()
{
    vector <int> vect_array;
    for(int i=0; i<10;i++){
        vect_array.push_back(i);
    }

    vector <int> vect_array1;
    for(int i=10; i<20;i++){
        vect_array1.push_back(i);
    }
    
    cout<< "vect_array :";
    print(vect_array);

    cout<< "vect_array1 :";
    print(vect_array1);

    vect_array.pop_back();
    cout << "After pop_back operation on the array : ";
    print(vect_array);


    cout<<"result of vect_array.insert(vect_array.end(),9) :  ";
    vect_array.insert(vect_array.end(),9);
    print(vect_array);
    
    cout<<"result of vect_array.erase(vect_array.end()) :  ";
    vect_array.erase(vect_array.end());
    print(vect_array);

    cout<<"result of vect_array.emplace(vect_array.begin(),99) :  ";
    vect_array.emplace(vect_array.begin(),99);
    print(vect_array);

    cout<<"result of vect_array.emplace_back(99) :  ";
    vect_array.emplace_back(99);
    print(vect_array);

    vect_array1.swap(vect_array);
    
    cout<<"-----------------------------------"<<endl;
    cout <<"After Swapping "<<endl;
    cout<< "vect_array :";
    print(vect_array);

    cout<< "vect_array1 :";
    print(vect_array1);

    cout<<"-----------------------------------"<<endl;
    cout <<"Applying clear()"<<endl;
    vect_array.clear();
    print(vect_array);
   
 return 0;
}