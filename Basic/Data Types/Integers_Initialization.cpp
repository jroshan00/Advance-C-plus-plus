#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    
    //Braced initialization
    int elephant_count; //Variable may cobtain any garbage value. WARNING
    int lion_count{}; //Initializes to zero
    int dog_count{10}; //Initializes to 10
    int cat_count{15}; //Initializes to 15

    //Initialization using Assignment operator
    int x=15;
    int f=56;
    int k=78;

    //Functional Initialization
    int apple_count(5);
    int orange_count(5);
    int fruit_count(apple_count+ orange_count);

    cout << "Fruit count is shown as :" << fruit_count << endl;
    cout << "\n" ; // adds a new line to separate the output

    //can use expression as initialize
    int domesticated_animals { dog_count + cat_count};  
    cout << "domestic animals is shown as : " << domesticated_animals << endl;
    
    //Won't compile the expression in the braces use declearted variables
    //int bad_initialization {doesnt_exist1 + doesntexist2};
    
    //here we can see that variable "xo" being int data type will store integer data only
    int xo=2.6;
    cout << xo << endl;

    //2.9 is a type double, with a wide range than int (So Error or Warning)
    double narrowing_conversion{2.9};
    int conversion=int(narrowing_conversion);
    cout << narrowing_conversion;
    cout<< "\n";
    cout << conversion;

}