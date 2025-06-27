#include <iostream>
using namespace std;
int main()
{
cout<<"____std::cout<< requires Null character if size is as per the array element "  << endl;
cout<< "When Null Character is missing  garbage value is printed at the end of array" << endl;
char Grades[]{'A','B','C','D','E','F'};
cout<<"Grades -------> "<< Grades << endl;
 char message[5]{'H','e','l','l','o'};
 cout<<"message -------> "<< message << endl;

 cout<<"____Lets loop through the char array__" << endl;

 for (char c : message){
    cout<< c;
 }

 cout<< "\n";
 
 /*
 It will print Hello o⌐║☺ as output because '\0' is not there
 "\0" indicates end of an character array as a NULL Character
 */  
message[5]={'\0'};
// The Null character is at index 5 (Note:Index starts with 0) showing end of the array collection
cout<< message << endl;

/* if the size of the array +1 or more the
number of elements in the character array then 
by default it add "\0" as Null chaarcter
*/
cout<<" ______Array Example________" << endl;
char ArrayExample[9]{'R','O','S','H','A','N'};
cout<< ArrayExample<< endl;



cout<< "___String_Literal__" <<endl;

char stringInCPlusPlus[]={"Alphabate"};

//Here in c++ "" automatically shows that the string is finished
cout<< "  ||  stringInCPlusPlus ------>>>> " << stringInCPlusPlus <<" || sizeof(stringInCPlusPlus)---->>"<<sizeof(stringInCPlusPlus)<< endl;



 return 0;
}