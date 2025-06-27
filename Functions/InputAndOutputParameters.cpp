#include <iostream>
#include <string.h>
using namespace std;

void max_str(const string string1, const string string2, string& Output){
    if(string1> string2){
        Output=string1;
        cout << " string : " << string1  << " : is greater than " << string2 << endl;
    }else{
        Output=string2;
         cout << " string : " << string2  << " : is greater than " << string1 << endl;
    }
}

void max_int(const int int1, const int int2, int &Output1){
    
    if(int1> int2){
        Output1= int1;
        cout << " integer : " << int1  << " : is greater than " << int2 << endl;
    }else{
        Output1= int2;
         cout << " integer : " << int2  << " : is greater than " << int1 << endl;
    }
}

int main()
{
    const string input1="A";
    const string input2="B";
    string output{};


    const int inp1=99;
    const int inp2=10;
    int output1{};

    max_str(input1,input2,output);

    cout << "---------------------------------------------\n" << endl <<" output : " <<output << endl;

    max_int(inp1,inp2,output1);

    cout << "---------------------------------------------\n" << endl <<" output : " << output1 << endl;


   
 return 0;
}