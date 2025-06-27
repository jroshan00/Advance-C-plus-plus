
/*
URGENT NOTE: Always provide a default constructor for your classes, especially if 
they will be part of inheritance hierarchy
*/

#include <iostream>
#include <string.h>
using namespace std;




class Gender{
    public:
    string name{};
    string gender{};

    Gender(){
        cout << "\n\nDefault Constructor Called\n\n" << endl;
    };

    Gender(string name_para,string gender_para,int age_para, double height_para, string sex_para, string homosexual_para){
        age=age_para;
        name=name_para;
        gender=gender_para;
        height=height_para;
        sex=sex_para;
        homosexual=homosexual_para;
    }

    
    friend ostream& operator << (ostream& out ,const Gender& gender1){
        out << "My Name is " << gender1.name << ", I am " << gender1.gender << ", i am of Age " << gender1.age <<", My height is "
        << gender1.height << ", " << gender1.sex << " i have done sex, "
        << gender1.homosexual << " I have no interest in homosexuality.";

        return out;
    };

    protected:
    int age{};
    double height{};

    private:
    string sex{};
    string homosexual{};
};




class person : protected Gender
{
    public:

    person(){
        cout << "\n\nDefault Constructor Called\n\n" << endl;
    };
    person(string name_para0, string gender_para0, int age_para0){
        name =name_para0;
        gender=gender_para0;
        age=age_para0;
    }

    friend ostream& operator << (ostream& out ,const person& person1){
        out << "My Name is " << person1.name << ", I am " << person1.gender << ", i am of Age " 
        << person1.age <<", My height is "<< person1.height ;
        //<< ", " << person1.sex << " i have done sex, "
        //<< person1.homosexual << " I have no interest in homosexualperson";

        return out;
    };
};



class Human : private person {
    public:
    Human(){
        cout << "\n\nDefault Constructor Called\n\n" << endl;
    };
    Human(string name_para1, string gender_para1, int age_para1, double height_para1){
        name =name_para1;
        gender=gender_para1;
        age=age_para1;
        height=height_para1;
    }

    string get_name(){
        return name;
    }

    string get_gender(){
        return gender;
    }

    int get_age(){
        return age;
    }
    void set_age(int age_pa){
         age=age_pa;
    }
   
    friend ostream& operator << (ostream& out ,const Human& Human1){
        out << "My Name is " << Human1.name << ", I am " << Human1.gender << ", i am of Age " 
        << Human1.age <<", My height is "<< Human1.height ;
        //<< ", " << person1.sex << " i have done sex, "
        //<< person1.homosexual << " I have no interest in homosexualperson";

        return out;
    };
};





//Below code will show error as access specifier is private which converted 
//public -> private ;
//protected -> private;
//private -> private ;
//So private to public or protected is not possible


class cast : public person 
{
    public:
    cast(){
        cout << "\n\nDefault Constructor Called\n\n" << endl;
    };



    cast(string name_para2, string gender_para2, int age_para2){
        name =name_para2;
        gender=gender_para2;
        age=age_para2;
    }

    friend ostream& operator << (ostream& out ,const cast& cast1){
        out << " Name : " << cast1.name << " Gender : " << cast1.gender << " Age : " << cast1.age;
        return out;
    };

};




int main()
{
    Gender P1("Roshan","Male",24,5.5,"Yes","No");
    P1.name="Ravi Roshan";  // will run as access specifier is public so name is public
    cout << P1 <<endl<< endl;

    person per1("Rohan Vatts","Male",23);
    // p1.name = "pandey"; //  will show error as the access specifier is protected
    cout << per1<<endl<<endl;

    Human h1("Ritik","Male",20,5.10);
    cout << h1<<endl<<endl;
    cout << h1.get_gender() << endl;
    // h1.name="Roshan";    //  will show error as the access specifier is private


    cast c1("Rehan","Male",20);
    cout << c1;
   
    cast c2;
    // c2.set_age(22);
    // cout << c2.get_age() << endl;
    //cout << c2.name;   // note: declared private here


   
 return 0;
}