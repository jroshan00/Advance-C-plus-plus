#include <iostream>
#include <string.h>

using namespace std;
int main()
{

    string myself="Roshan Pandey";
    string planet {"Earth, Where the sky is blue "};
    string preffered_planet {planet};
    string message{"Hello, dear",5};

    string weired_message(4,'e');

    string greeting{"Hello World"};

    string saying_hello{ greeting,6,5};  // Starting with 6 Index, taking 5 characters 

    cout << "full name : "<<myself<<endl;
    cout<< "planet : "<< planet<< endl;
    cout<< "preffered_planet : "<< preffered_planet<<endl;
    cout<< "message--> (message{\"Hello, dear\",5})--: " << message<<endl;  
    cout << "weired_message : "<< weired_message<<endl;
    cout << "greeting : "<< greeting<<endl;
    cout<< "saying hello : " << saying_hello << endl;
/*
..........................................................
full name : Roshan Pandey
planet : Earth, Where the sky is blue
preffered_planet : Earth, Where the sky is blue
message--> (message{"Hello, dear",5})--: Hello
weired_message : eeee
greeting : Hello World
saying hello : World
...........................................................
*/


 return 0;
}