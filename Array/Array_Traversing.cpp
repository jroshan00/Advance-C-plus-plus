#include <stdio.h>
#include <iostream>

//code fro traversing
void display(int arr[], int n){

    for(int i=0 ; i <= n ; i++ ){
        printf("%d\t", arr[i]);
    }

}


int main(){

    int arr[100]= {7,8,12,27,88};
    display(arr,4);

}