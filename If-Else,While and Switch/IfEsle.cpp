#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    int n;
    int i=2;
    // printf("Entr the num");
    //         printf("\n");
    // scanf("%d",n);
    // while(i<n){
    //     if(n%i==0){
    //         printf("Not prime for %d",i);
    //         printf("\n");
    //     }
    //     else{

    //         printf("prime for %d",i);
    //         printf("\n");

    //     }
    //     i=i+1;

    // }
    // printf("________________________");

    cin >> n;
    while(i<n){
        if(n%i==0){
            cout << "Not prime " << i <<endl;

        }
        else{
            cout << "Prime for " << i << endl;
        }
        i=i+1;
    }

    

    return 0;

}