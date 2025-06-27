/*
Write a program in C++ to find the sum of the first 10 natural numbers.

Sample Output:

The natural numbers are:
1 2 3 4 5 6 7 8 9 10
The sum of first 10 natural numbers: 55

*/
#include <iostream>
#include<math.h>
using namespace std;

// int ArrayInsertion(int array[],int SizeofArray)
// {
//     array={0};
//     int val, value;
//     for(int i=0; i < SizeofArray; i++){
//         cin>> val;
//         int value = val;
//         array[i]=value;
//     }
//     return 1;
// }

// void travering(int* array[]){
//     int i=0;
//     int ArraySize = sizeof(array)/sizeof(array[0]);
    
//     while (i<=ArraySize){
//         cout << array[0] << " " ;

//     }
// }

int main(){
    int num,i;
    cout<< "ENTER THE VALUE OF NUMBER : " ;
    cin>> num;
    i=0;
    int sum=0;
 
    while(i<=num){

        // cout<< i << endl;
        sum=sum+i;
        i+=1;

    }
    cout << "The value of sum : " << sum ;

    return 0;
    
}

