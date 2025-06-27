#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  /*

  strcpy() : Copies the string to another
  strncpy() : copies a certain amount of characters from one string to another
  strcat() : concatenates two strings
  strncat() : concatenates a certain amount of characters of two strings
  strnxfrm() : transform a string so that strcmp would produce the same result as strcoll
  */

 cout<< endl;
 cout<<"Here example of strcat() " << endl;

 char dest[50] = " Hello " ;
 cout <<"dest : " << dest<<endl;
 char src[50]= "World";
 cout <<"src : " << src<<endl;
 strcat(dest,src);
 strcat(dest, " Good by ");
 cout << " After Concatination : " << endl;
 cout <<"Now dest : " << dest<<endl;

 // More concatination

 cout<< "-------------------------------------"<<endl;
 cout<<"More Concatination" << endl;

//  char *dest1=new char[30]{'F','i','r','e','l','o','r','d','\0'};
//  char *source1= new char[30]{',','T','h','e',',','P','H','2','\0'};

 char *dest1=new char[30]{"Fire Lord"};
 char *source1= new char[30]{" The King Phenix"};

 cout << " strlen (dest1) : "<<strlen(dest1)<<endl;
 cout << " strlen (source1) : "<<strlen(source1)<<endl;
 
cout<< endl;

cout<<" strcat(dest1,source1)  : "<< strcat(dest1,source1)<< "\n"<<endl;
cout << "  Now  strlen (dest1) : "<<strlen(dest1)<<endl;


cout<< "-------------------------------------"<<endl;
cout<<"More Concatination Using strncat() " << endl;

char des2[50]= "Roshan With ";
char src2[50]="Pandey Hello";
cout << "des2 : " <<  des2 << endl;
cout << "src2 : " << src2 << endl;

cout<< "strncat(des2,src2,6) : " << strncat(des2,src2,6) <<endl;

cout<< "\n-------------------------------------\n"<<endl;
cout<<"Using strcpy() & strncpy " << endl;

const char *example="hero";
char dest11[]={'R','o','s','h','a','n','\0'};

size_t count{2};

cout << "dest11 : "<< dest11 << endl;
cout << "example : "<< example << endl;
cout<< "____________________________strcpy()______________________"<< endl;

cout<< "strcpy(dest11,example)  : "<<strcpy(dest11,example)<<endl;
cout << "dest11 : "<< dest11 << endl;

cout<< "____________________________strncpy()______________________"<< endl;
cout<< "strncpy(dest11,example)  : "<<strncpy(dest11,example,count)<<endl;
cout << "dest11 : "<< dest11 << endl;


 return 0;
}

/*
Here example of strcat()
dest :  Hello
src : World
After Concatination :
Now dest :  Hello World Good by

------------------------------------------------------
Morre Concatination
strlen (dest1) : 9
strlen (source1) : 16

strcat(dest1,source1)  : Fire Lord The King Phenix

Now  strlen (dest1) : 25

-------------------------------------
More Concatination Using strncat()
des2 : Roshan With
src2 : Pandey Hello
strncat(des2,src2,6) : Roshan With Pandey

*/