/*
Find prime number within a range:                                     
--------------------------------------                                 
 Input number for starting range: 1                                    
 Input number for ending range: 100                                    
                                                                       
 The prime numbers between 1 and 100 are:                              
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
                                                                       
 The total number of prime numbers between 1 to 100 is: 25  
 
 */

#include <iostream>
#include <math.h>
using namespace std;

int prime(int num1, int num2){
    int fnd=0;
    int ctr=0;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                 cout<<i<<" ";
                 
               }
               ctr=0;
       }
 cout<<"\n\n The total number of prime numbers between "<<num1<<" to "<<num2<<" is: "<<fnd<<endl;
 return 1;
}

int main(){
    int y=1;
    int x=100;
    int val=prime(x,y);
    cout << endl;
    cout<< val;

    
    
    return 0;

}