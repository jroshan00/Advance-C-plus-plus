#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string full_name;
    cout << "Enter your name :" ;
    //grabbing data from spaces 
    getline(cin,full_name); //using cin will not take space as input so getline() is the key function here that allows user to get input allowing space
    cout << "Enter your age :";
    cin >> age;
    cout << "My name is " << full_name << ", I am "<< age <<" years old";

}