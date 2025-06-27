#include <stdio.h>
#include <iostream>

void display(int arr[], int n)
{
    //code for traversal
    for(int i=0; i <=n; i++)
    {
        printf("%d\n",arr[i]);
    }

}

void intDeletion(int arr[],int size, int index)
{
    //code for deletion
    for(int i=index; i<size-1; i++){
        
        arr[i]=arr[i+1];

    }
}

int main(){

    int arr[100]={7,8,12,27,88};

    int size=5;
    int index=1;

    printf("_________________________________________");

    display(arr,size);

    printf("_________________________________________");

    intDeletion(arr,size,index);

    size=size-1;

    display(arr,size);

    printf("_________________________________________");

    return 0;

}
