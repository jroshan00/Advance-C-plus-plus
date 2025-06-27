#include <iostream>
#include <cstring>
using namespace std;
int main()
{

  //Finding the first occurrence of the character
cout << " -------------------------------------------------------------- \n "<<endl;
cout << " ------TO FIND THE FIRST OCCURENCE USING strchr()----- \n "<<endl;


   const char *str{"Try not. Do pr Don't. There is no try "};
   char target='T';
   const char *result =str;
  //  cout << strchr(result, target)<<endl;
   int iteration{};

   while((result=strchr(result, target))!=nullptr){
    cout << "Found : " << target << " Starting at " << result << " \n";

    ++result;
    ++iteration;
   }

   cout << "iteration : " <<iteration << endl;


cout << " -------------------------------------------------------------- \n "<<endl;
cout << " ------TO FIND THE LAST OCCURENCE USING strrchr()------ \n "<<endl;


char input[] = "/home/user/hello.cpp";
char *output = strrchr(input,'/');

if(output)
  cout << output+1 << endl; //+1 because we want to start 
                            // printing past characters found by strchr

cout <<"\n ***********************program ends here************************" ;

 return 0;
}


/*
-------------------------------------------------------------- 

 ------TO FIND THE FIRST OCCURENCE USING strchr()-----

Found : T Starting at Try not. Do pr Don't. There is no try
Found : T Starting at There is no try
iteration : 2
 --------------------------------------------------------------

 ------TO FIND THE LAST OCCURENCE USING strrchr()------

hello.cpp

 ***********************program ends here************************
 
*/