#include <iostream>
using namespace std;
int main()
{
 const unsigned int Count{15};
 unsigned int i{11}; // Initialization
 do{
    std:: cout <<'['<< i << ']' << endl;
    i++;
 } 
 while(i<Count);
 
 return 0;

}