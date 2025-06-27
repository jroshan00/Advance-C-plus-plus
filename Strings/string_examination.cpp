#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    //use of strlen() function for length of a function

char message[]{"Hello, This is Roshan"};
cout<< message<<endl;
char message1[]="Hello, This is Rohan";
cout<< message1<<endl;

cout<< "strlen() does not include the Null character which is located at the last of string in c" <<endl;

cout<< "Show the length of string array \"Message1\": "<<strlen(message1)<<endl;
cout<< "Show the length of string array \"Message2\": "<<strlen(message)<<endl;
cout<< "Sizeof() includes the Null character " <<endl;
cout<< "Show the length of string array \"Message1\": "<<sizeof(message1)<<endl;
cout<< "Show the length of string array \"Message2\": "<<sizeof(message)<<endl;

//strcmp : comparing


cout<<" \n ________________________________________________"<<endl;

const char *string_data1{"Ala8ama"};
const char *string_data2{"Alabama"};

cout<< "strcmp ("<< string_data1 << ","<< string_data2<<") : " << strcmp(string_data1,string_data2)<< endl;

string_data1="Alabama";
string_data2="Alabama";

cout<<" \n ________________________________________________"<<endl;

cout<< "strcmp ("<< string_data1 << ","<< string_data2<<") : " << strcmp(string_data1,string_data2)<< endl;

//strncmp : comparing

int n{3};

cout<<" \n ________________________________________________"<<endl;

const char *string_data3{"Hufaama"};
const char *string_data4{"Hugumat"};   // alphates position decides the 0,1,-1 values

cout<< "strncmp ("<< string_data4 << ","<< string_data3<<") : " << strncmp(string_data4,string_data3,n)<< endl;  //here lhs ater ghs so 1

string_data3="Alatpma";
string_data4="Aapnaba";

cout<<" \n ________________________________________________"<<endl;

cout<< "strncmp ("<< string_data3 << ","<< string_data4<<") : " << strncmp(string_data3,string_data4,n)<< endl;


string_data3="Alabama";
string_data4="Alabama";

cout<<" \n ________________________________________________"<<endl;

cout<< "strncmp ("<< string_data3 << ","<< string_data4<<") : " << strncmp(string_data3,string_data4,n)<< endl;
 return 0;
}