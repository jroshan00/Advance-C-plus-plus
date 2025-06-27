#include <iostream>
#include <string.h>
using namespace std;

class cat{
    public:

    cat()
        {
        cat_name="None";
        cat_breed="None";
        cat_age= new int;
        *cat_age=0;

        cout << "Cat name : " << cat_name << " address : " << this << endl;
    }

    cat(string& name, string& breed, int& age){
        cat_name=name;
        cat_breed=breed;
        cat_age= new int;
        *cat_age=age;

        cout << "Cat name : " << cat_name << " address : " << this <<endl;
    }
    ~cat(){
        delete cat_age;
        cout << "Destructor called for : " << cat_name <<"  -> " << this <<endl;
    }


/*
    void set_name(string& cat_name){
       // cat_name=cat_name; //this does nothing
       this->cat_name=cat_name;
    }

    void set_breed(string& cat_breed){
        this->cat_breed=cat_breed;      
    }
    void set_age( int& cat_age){
        *(this->cat_age)=cat_age;
    }

*/

//Chained call using pointers
    cat *set_name( const string& name11){
       this-> cat_name=name11;
       return this;
    }

    cat *set_breed(const string& breed){
        this->cat_breed=breed;
        return this;
    }
    cat *set_age( int& age){
        if(this->cat_age){
            *(this->cat_age)=age;
        }
        return this;
    }

/*
  // Chained Call using references
    
    cat &set_name( const string& name11){
       this-> cat_name=name11;
       return *this;
    }

    cat &set_breed(const string& breed){
        this->cat_breed=breed;
        return *this;
    }
    cat &set_age( int& age){
        if(this->cat_age){
            *(this->cat_age)=age;
        }
        return *this;
    }
*/

    string get_name(){
        return cat_name;
    }

    string get_breed(){
        return cat_breed;
    }

    int get_age(){
        return (*cat_age);
    }

    private:
    string cat_name{};
    string cat_breed{};
    int *cat_age{};
};



int main()
{
   /*

Each class members function contains a hidden pointer called this.
That pointer contains the address of the current object, for which the method is being executed.
This also applies to constructor and destructors.

*/   
cat c11;
string name="pussy";
string breed="foreign";
int agee=3;
cat c12(name,breed,agee);

string name1="lussy";
string breed1="fing";
int agee1=4;
cat c13(name1,breed,agee);
c13.set_name(name1)->set_age(agee1)->set_breed(breed1);   //Pointer version
// c13.set_name(name1).set_age(agee1).set_breed(breed1);   //reference version
// c13->set_name(name1);
// c13->set_age(agee1);
// c13->set_breed(breed1);

string name2=c13.get_name();
string breed2=c13.get_breed();
int agee2=c13.get_age();

cout << name2 <<" : " << breed2 << " : " << agee2 << endl;
 return 0;
}