#include <iostream>
using namespace std;
int min(int a, int b);  //Declaration
int inc_mult( int , int ); // In Declaration the variable name is not impotant





int main()
{
    int x=5,y=8;
    cout << "  min(x,y) : " << min(x,y) << endl;
    cout<< " inc_mult(x,y) :  "<< inc_mult(x,y);
   
 return 0;
}




//function defintion
int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

//function definition

int inc_mult( int a, int b){

    return ((++a)* (++b));
}
