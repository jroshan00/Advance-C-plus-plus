#include<iostream>
using namespace std;

int BinarySearch(int array[], int size, int element){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=(low + high)/2;
        
        if(array[mid]==element){
            
            return mid;
        }
        
        if (array[mid]<element)
        {
           low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
        
    }
}

int main(){
    int array[10]={9,91,2,33,4,54,6,7,8};
    int binarySearch=BinarySearch(array,10,9);

    cout<< "The element was found at index  " << binarySearch << endl;

    return 0;

}