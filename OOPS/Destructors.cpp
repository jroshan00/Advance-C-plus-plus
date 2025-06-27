/*
Special methods that are called when an object dies. They are needed when the object
dies. They are needed when the object needs to release some dynamic memory, or for some other kind of clean up.

When the destructors are called in weired places that may not be obvious
-> When an object is passed by value to a function
-> When an local object is returned from a function(for some compilers).

Others obvious cases are :
-> When a local stack object goes out of scope(dies)
-> When a heap object is released with delete.

*/


#include <iostream>
#include <string.h>
using namespace std;
class Dog{

    public:
    Dog(){
        dog_name= "None";
        dog_breed="None";
        dog_age= new int;      //Dynamic memory allocation
        *dog_age=0;  
    };
    Dog(string name_par, string breed_par, int age_par){
        dog_name=name_par;
        dog_breed=breed_par;
        dog_age=new int; //Memory allocation on heap
        *dog_age=age_par;
        cout << "Dog Constructor called for -> " << dog_name << endl;
    }


    int get_age(){
        return (*dog_age);
    }

    ~Dog(){      //Destructor
        delete dog_age;
        cout << "Dog destructor called for -> " << dog_name << endl;
    }
    string get_name(){
        return dog_name;
    }
    
    string get_breed(){
        return dog_breed;
    }

    private:
    string dog_name;
    string dog_breed;
    int *dog_age{nullptr};
};


 void some_fnc(){
        Dog dog2("Lobby","lebra",8);
    }


 void another_func(){
    Dog *p_dog3 = new Dog("Tonny" , "German Sephard", 13); // It will only call constructor as pointer to the class

    delete p_dog3;        //It will call destructor
 }

int main()
{
    Dog dog1;
    string name= dog1.get_name();
    string breeed=dog1.get_breed();
    int agee=dog1.get_age();
    cout << "\n------------------------------------------------------" << endl;
    cout << "Name : " << name <<endl;
    cout << "breeed : " << breeed <<endl;
    cout << "agee : " << agee <<endl;

    some_fnc(); //It will call constructor & destructor immediately as local call occurs in function
    cout << "------------------------------------------------------" << endl;
    another_func();

    Dog dog2("puppy","lebra",8);
    name= dog2.get_name();
    breeed=dog2.get_breed();
    agee=dog2.get_age();

    cout << "------------------------------------------------------" << endl;
    cout << "Name : " << name <<endl;
    cout << "breeed : " << breeed <<endl;
    cout << "agee : " << agee <<endl;


    cout << "------------------------------------------------------" << endl;
 return 0;
 // Destructors are always called at the end of main function as you can see

}

/*

Name : None
breeed : None
agee : 0
Dog Constructor called for -> Lobby
Dog destructor called for -> Lobby
Dog Constructor called for -> puppy
Name : puppy
breeed : lebra
agee : 8
Dog destructor called for -> puppy
Dog destructor called for -> None

*/