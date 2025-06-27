#include <string.h>
using namespace std;
class person{
    // friend ostream& operator << (ostream& out, const person& person1){
    //     out << "first name: " << person1.first_name << "last name: " << person1.last_name ;
    //     return out;
    // };

    public:
    person();
    person(string f_name_para, string l_name_para);
    // ~person();

     string get_fname() const{     //const is important here
        return first_name;
    }

     string get_lname() const{      //the position is after function only
        return last_name;
    }
    
    void set_fname(string fname) {     
        first_name=fname;
    }

    void set_lname(string lname) {     
        last_name=lname;
    }

    private :

    string first_name ="None";
    string last_name= "None";
 };

 person::person(){};
 person::person(string f_name_para, string l_name_para){
    first_name=f_name_para;
    last_name=l_name_para;

 };
 
 class player : public person
 {

    public:
    player(){};
    
    player(string game_para){
        game_name=game_para;
    }
    
    string get_gname() const{
        return game_name;
    }

friend ostream& operator << (ostream& out, const player& player1){
        out<< "Player : " << player1.get_gname() << " Player Name : "<< player1.get_fname()
        << " " << player1.get_lname();
        return out;
    };


    private :
    string game_name ="None";
 };

