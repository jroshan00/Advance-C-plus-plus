#include <stdio.h>
#include<iostream>
using namespace std;


void display(int array[],int size){
    for(int i=0; i <= size; i++){
        cout << array[i]<< endl;
    }

}

int arraydeletion(int array[], int size, int capacity, int index){

    for(int i=index;i<=size-1;i++){
        array[i]=array[i+1];
       

    }
    return 1;

}

int main(){

    cout << "The Array before deletion" << endl;

    int Array[100]={7,8,12,27,88};
    int size=4;
    display(Array,size);

   

    cout << "The Array after deletion" << endl;

    arraydeletion(Array,size,100,3);
    size=size-1;
    
    display(Array,size);

    return 0;


}