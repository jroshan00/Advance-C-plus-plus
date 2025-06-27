/*A mechanism to set up anonymous functions (withot names). 
Once we have them set up, we can either give them names and call them, 
or we can even get the to do things directly.

Lamda function signature:

[capture list](parameters) -> return type {

        //Function body

}

for example :

auto addfunc = [](){
   cout << "Hello World " << endl;
};


addfunc();   //calling the lamda function

*/

#include <iostream>
using namespace std;
int main()
{

// Having No function 

    cout << endl;

    [](){
        cout << "Hello world"<<endl;
    }();
   
// Having No function name but parameters

    [](double a,double b){
        cout << (a+b);
    }(4.5,5.8);
    cout << endl;

//Having function name as well as parameters 

    auto func1 = [](double a, double b){
    cout << "a+b : " << (a+b) << endl;
    };

    func1(10.20,48.7);
    cout << endl;

//Explicitly specifying the return type

   auto func3= [](double a, double b)->int {
    return a+b ;
   };

   auto func4= [](double a, double b) {
    return a+b ;
   };


   cout << " Result 3 : "<< func3(1.2,2.9)<< endl;   // will produce int type result
   cout << " Result 4 : "<< func4(4.5,6.9)<< endl;  // by default it will result in double type

 return 0;

}