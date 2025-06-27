//Write a program to add a number in a array

#include<iostream>

using namespace std;


void traversal(int array[],int size){
    for(int i=0; i< size; i++){
        cout<< array[i]<< endl;
    }
}

void insertion(int array[],int size,int index, int element){
    
    if(size<=index){
        cout<< " Need to add more size "<< endl;
    }
    int temp= array[index];
    for(int i=size;i>=index;i--){
        array[i+1]=array[i];
        }
    array[index]=element;
    array[index+1]=temp;

}
int main(){
    int array[11]={1,2,3,4,5,6,7,8,9};
    traversal(array,9);
    cout<<"_____________________________________________"<<endl;
    insertion(array,10,8,78);
    traversal(array,10);
}