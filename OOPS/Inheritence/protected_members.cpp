#include <iostream>
#include <string.h>
using namespace std;

class Human{
    // friend ostream& operator << (ostream& out, const Human& Human1){
    //     out << "first name: " << Human1.first_name << "last name: " << Human1.last_name ;
    //     return out;
    // };

    public:
    Human();
    Human(string_view f_name_para, string_view l_name_para);
    // ~person();

    //  string get_fname() const{     //const is important here
    //     return first_name;
    // }

    //  string get_lname() const{      //the position is after function only
    //     return last_name;
    // }
    
    // void set_fname(string fname) {     
    //     first_name=fname;
    // }

    // void set_lname(string lname) {     
    //     last_name=lname;
    // }

    protected :

    string_view first_name ="None";
    string_view last_name= "None";
 };

 Human::Human(){};
 Human::Human(string_view f_name_para, string_view l_name_para){
    first_name=f_name_para;
    last_name=l_name_para;

 };
 
 class HumanType : public Human
 {

    public:
    HumanType(){};
    
    HumanType(string_view game_para){
        game_name=game_para;
    }

    // first_name="Roshan";
    // last_name ="Pandey";
    

friend ostream& operator << (ostream& out, const HumanType& HumanType1){
        out<< "HumanType : " << HumanType1.game_name << " HumanType Name : "<< HumanType1.first_name
        << " " << HumanType1.last_name;
        return out;
    };


    private :
    string_view game_name ="None";
 };





int main()
{
 
  HumanType humantype1("Boy");
  cout << humantype1;
   
 return 0;
}