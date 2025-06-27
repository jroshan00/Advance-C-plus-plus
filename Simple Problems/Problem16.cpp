#include <iostream>
#include <string.h>
#include <map>
#include <set>
using namespace std;
class solution{
    public:
    map <int,int> map_var1;
    set <string> set_var1;

    void print(map <int,int> example){
        for(auto i:example){
            cout << "key : " << i.first << ", value : " <<i.second ;
        }
    }

    void check_for_equality(string s1,string s2){
        for(auto i:s1){

        }

    }




};

int main()
{
     map <int,int> map_var2;
     map_var2[2]=102;
     cout << map_var2.at(2)<<endl;


    solution s1;
    s1.map_var1[1]=101;
    cout<< s1.map_var1.at(1)<<endl;
    s1.print(map_var2);
   
 return 0;
}