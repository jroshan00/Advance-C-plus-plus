#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

void print(vector <int> name){
    int size=name.size();
    for(int i=0;i<size;i++){
        cout<< name[i]<<" ";
    }

}


int main()
{

    vector <int> vect_array={10,20,54,65,78};
    int size=vect_array.size();
    //use of end() and begin() Iterators
    sort(vect_array.begin(),vect_array.end());
    print(vect_array);

cout<<"\n----------------------------------------------------------------" <<endl;
 
    //use of rend() and rbegin() Iterators
    sort(vect_array.rbegin(),vect_array.rend());
    print(vect_array);

cout<<"\n----------------------------------------------------------------" <<endl;
    
    // sort(vect_array.cbegin(),vect_array.cend());
    // print(vect_array);                               // Error as read only operator is passed.


 return 0;
 
}