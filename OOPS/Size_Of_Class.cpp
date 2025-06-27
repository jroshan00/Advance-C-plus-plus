#include <iostream>
#include <string.h>
using namespace std;

class Wrapper{
    public:

    void do_something(){

    }

    void print_info(){
        // cout << "var1 : " << m_var1 << endl;
        // cout << "var2 : " << m_var2 << endl;
        // cout << "var3 : " << m_var3 << endl;
    }


    private :
    int m_var2{};  //4
    int m_var3{};  //4
    // int m_var5{};
    // int var8{};
    // int var7{};
    // int var88{};
    // int varp{};

    // string m_name{"Loren ipsum sit amet ..."};

};

int main()
{
    Wrapper w1;
    cout << " sizeof Wrapper class : " << sizeof(Wrapper) << endl;        // size of class increases
                                                                         // as the member variables increses
    string name= "Al yousifi at its best that has never came upon the ";

    cout<< "sizeof(name)  : " << sizeof(name) << endl;  // string variable beheave as constant char  pointer having
                                                        // 32 bytes as size for " cta" as well as "vhsfsrndjfuh"
    


   
 return 0;
}