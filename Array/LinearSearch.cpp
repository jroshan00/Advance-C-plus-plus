#include <stdio.h>
#include <iostream>
using namespace std;
int linearSearch(int array[],int element, int size)
{
    int index=0;
    for (int i=1;i<size;i++){
        if(array[i]==element){
            // cout << "Element is at Index No: " << i << endl;
            index=i;
        }
        else{

            index=-1;
        }
    }
    return index;
}

int main(){
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    int LinearSearch=linearSearch(array,11,10);

    cout<< "The element was found at index  " << LinearSearch << endl;

    return 0;
}