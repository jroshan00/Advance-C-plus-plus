#include <iostream>
#include <string>
using namespace std;

class bird{

    //members are private by default so need to write public
    public: 
    int ageof{};
};

struct intro
{
    /* Members are public by default */
    string name={};
};


int main()
{
    bird b1;
    intro cat;

    cat.name="Pussy";
    cout << " As cat name is public by default : "<<cat.name << endl;

    b1.ageof=22;
    cout << " As b1 age is private by default : "<<b1.ageof << endl;  // will produce error if not declared public in class

   
 return 0;
}