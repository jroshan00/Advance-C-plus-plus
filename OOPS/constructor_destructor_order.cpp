/*

Constructor is called as per the calling ascending order 
Destructor is called in reverse order.

for example:
Dog Constructor called for -> None
Dog Constructor called for -> poppy
Dog Constructor called for -> lommmy
Dog Constructor called for -> honey

----------------------------------------------
Dog destructor called for -> honey
Dog destructor called for -> lommmy
Dog destructor called for -> puppy
Dog destructor called for -> None

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
        cout << "Dog Constructor called for -> " << dog_name << endl;
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

int main()
{
    cout << "\n------------------------------------------------------" << endl;
    Dog dog1;
    string name= dog1.get_name();
    string breeed=dog1.get_breed();
    int agee=dog1.get_age();
    cout << "\n------------------------------------------------------" << endl;
    cout << "Name : " << name <<endl;
    cout << "breeed : " << breeed <<endl;
    cout << "agee : " << agee <<endl;


    Dog dog2("puppy","lebra",8);
    name= dog2.get_name();
    breeed=dog2.get_breed();
    agee=dog2.get_age();

    cout << "------------------------------------------------------" << endl;
    cout << "Name : " << name <<endl;
    cout << "breeed : " << breeed <<endl;
    cout << "agee : " << agee <<endl;


    cout << "------------------------------------------------------" << endl;

    Dog dog3("lommmy","street dog",4);
    name= dog2.get_name();
    breeed=dog2.get_breed();
    agee=dog2.get_age();

    cout << "------------------------------------------------------" << endl;
    cout << "Name : " << name <<endl;
    cout << "breeed : " << breeed <<endl;
    cout << "agee : " << agee <<endl;
    cout << "------------------------------------------------------" << endl;
 
    Dog dog4("honey","husky",7);
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
------------------------------------------------------        
Dog Constructor called for -> None

------------------------------------------------------        
Name : None
breeed : None
agee : 0
Dog Constructor called for -> puppy
------------------------------------------------------        
Name : puppy
breeed : lebra
agee : 8
------------------------------------------------------        
Dog Constructor called for -> lommmy
------------------------------------------------------        
Name : puppy
breeed : lebra
agee : 8
------------------------------------------------------        
Dog Constructor called for -> honey
------------------------------------------------------        
Name : puppy
breeed : lebra
agee : 8
------------------------------------------------------        
Dog destructor called for -> honey
Dog destructor called for -> lommmy
Dog destructor called for -> puppy
Dog destructor called for -> None
*/