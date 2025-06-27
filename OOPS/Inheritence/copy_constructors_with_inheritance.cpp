/*
-> Copy Constructors are not inherited. But you wont usually notice this as
the compiler will insert an automatic copy constructor.

-> Inherited constructors are base constructors. They have no knowledge of the
derived class. Any member from the derived class will just contain junk or whaever default
value it's initilized with.

-> Constructors are inherited with whatever access specifier they had in base class.

-> On Top of derived constructors, you can add your own that possibly properly
intialized derived member variables.

-> Inheriting constructors adds a level of confusion to your code, its not clear
which constructor is building your object. It is recommended to avoid them and 
only use this feature if no other option is available.


*/


#include <iostream>
#include <string.h>
using namespace std;

class person{

    
    public:
    int age{};
    int shoes_number{};
    string sex{};
    person();
    person(string f_name_para, string l_name_para,string sex1,int shoes_num1,int age1);
    // ~person();

    person(const person& source):
    first_name(source.first_name),last_name(source.last_name),
    sex(source.sex),shoes_number(source.shoes_number),age(source.age)
    {
        cout << "Copy constructor is called for person"<< endl;
    }

     string get_fname() const{     //const is important here
        return first_name;
    }

     string get_lname() const{      //the position is after function only
        return last_name;
    }
    int get_age() const{     //const is important here
        return age;
    }

    int get_shoes_num() const{     //const is important here
        return shoes_number;
    }

    string get_sex() const{      //the position is after function only
        return sex;
    }
    
    void set_fname(string fname) {     
        first_name=fname;
    }

    void set_lname(string lname) {     
        last_name=lname;
    }

    friend ostream& operator << (ostream& out, const person& person1){
        out << "First Name: " << person1.first_name << "  Last Name: " << person1.last_name ;
        return out;
    };

    string first_name ="None";
    string last_name= "None";
 };

 person::person(){
    cout << "Default constructor called for person  "<< endl; 
 };
 person::person(string f_name_para, string l_name_para,string sex1,int shoes_num1,int age1){
    first_name=f_name_para;
    last_name=l_name_para;
    sex=sex1;
    shoes_number=shoes_num1;
    age=age1;
    cout << "Customized constructor called for person"<< endl; 
 };
 

class boy : public person{
   
    public:
    boy(){
        cout << "Default Constructor called for boy" << endl;
    }; 

    boy(string f_name_para, string l_name_para,string sex1,int shoes_number1,int age1){
        first_name=f_name_para;
        last_name=l_name_para;
        sex=sex1;
        shoes_number=shoes_number1;
        age=age1;
         cout << "Customized constructor called for boy"<< endl;
    }

    boy(const boy& source):person(source)
    {
        cout << "Custom copy constructor for engineer called for boy..." << endl;
    }

    friend ostream& operator << (ostream& out, const boy& boy1){
        out << "My age is " << boy1.get_age() << ", My shoes numer is " << boy1.get_shoes_num() ;
        return out;
    };
};

int main()
{
    boy  boy1("Roshan","Pandey","Male",6,23);
   cout << boy1<<endl;
   
   cout <<"__________________________________________"<<endl;
   
    person person1(boy1);  //copy constructor
    cout <<person1<<endl;

    cout <<"__________________________________________"<<endl;
    
    person  person2("Rohan","Vatts","Male",7,20);
    // boy boy2(person1);
    // cout << boy2<< endl;
    cout << person2<< endl;

 return 0;

}