#include <stdio.h>
#include<iostream>
using namespace std;


void display(int array[],int size){
    for(int i=0; i <= size; i++){
        cout << array[i]<< endl;
    }

}

int arrayInsertion(int array[], int size, int capacity, int index,int element){
    if (size >= capacity){
        return -1;

    }
    for(int i=size-1;i>=index;i--){
        array[i+1]=array[i];

    }

    array[index]=element;

    return 1;

}

int main(){

    cout << "The Array before insertion" << endl;

    int Array[100]={7,8,12,27,88};
    int size=4;
    display(Array,size);

   

    cout << "The Array after insertion" << endl;

    size=size+1;
    arrayInsertion(Array,size,100,3,45);
    
    display(Array,size);

    return 0;


}