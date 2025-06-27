#define _ns16000_ 69
#include <iostream>
using namespace std;
#define __vax__ 99 //object like macro
#if defined (__vax__) && defined (_ns16000_)

#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37

#endif
#define NUMBERS 1,2,3

// extern void foo(void);
#define foo() /* optimized inline version */

int main(){
    #define add(a,b) a+b  //function like macro
    std::cout << "The value of the vax can be : " << __vax__ << " "<<_ns16000_ <<std::endl;

    int sum=add(100,100);
    cout<< sum << endl;
    int x[] = {NUMBERS};
    cout <<"The size of the arry \"x\" : "<< sizeof(x)<< endl;

    cout << "Elements of the array " <<endl;
    
    cout << "_______________________" << endl;

    for(int i=0;i<(sizeof(x)/sizeof(int));i++){

        cout << x[i] <<endl;

    }
    cout << "_______________________" << endl;

    /*When the preprocessor expands a macro name,
    the macro’s expansion replaces the macro invocation, 
    then the expansion is examined for more macros to expand.
    */
   cout << "The size of the table: " << BUFSIZE  << " OR  "<< TABLESIZE << endl;
    return 0;
}