#include <iostream>
#include <ctype.h>

using namespace std;
int main()
{

    //checks for alphanumeric

    cout << "_______________________________________________"<<endl;


    cout<< "C is alphanumeric : " << isalnum('C') <<endl;
    cout <<"^ is alphanumeric : " <<  isalnum('^') << endl;
    cout <<"* is alphanumeric : " <<  isalnum('^') << endl;

    char input_char{'*'};

    if(isalnum(input_char)){
        cout << input_char << " is alphanumeric " << endl;
    }
    else {
        cout << input_char << " is not alphanumeric " << endl;
    }

    //checking for alphabatic 

    cout << "_______________________________________________"<<endl;

    cout<< "C is alphabatic : " << isalpha('C') <<endl;
    char input_char1='C';
     if(isalnum(input_char1)){
        cout << input_char1 << " is a alphabatic " << endl;
    }
    else {
        cout << input_char1 << " is a alphabatic" << endl;
    }
   
   //check for a character is blank

   cout << "_______________________________________________"<<endl;

   char message[]{"Hey! there my name is Roshan Pandey"};
   cout<< "message : "<< message<<"\n"<< endl;
   // find and print blank index 

   int blank_count{};

   for(size_t i{0}; i<size(message); ++i){
    if(isblank(message[i])){
        cout << "Found a blank charactercat index : [ " << i << " ]" << endl;
        ++blank_count;
    }
   }

   cout << " \n In total we found " << blank_count << " blank characters " << endl;

 return 0;
}


/*

-------------------------------Output-------------------------------------------
C is alphanumeric : 1
^ is alphanumeric : 0
* is alphanumeric : 0
* is not alphanumeric
_______________________________________________
C is alphabatic : 1
C is a alphabatic
_______________________________________________
message : Hey! there my name is Roshan Pandey

Found a blank charactercat index : [ 4 ]
Found a blank charactercat index : [ 10 ]
Found a blank charactercat index : [ 13 ]
Found a blank charactercat index : [ 18 ]
Found a blank charactercat index : [ 21 ]
Found a blank charactercat index : [ 28 ]

 In total we found 6 blank characters
*/