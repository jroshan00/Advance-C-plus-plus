// A program without using the main function
#include <iostream>
using namespace std;
 
int execute()
{
    cout << "execute() is compiled first";
    exit(0);
}
 
static int s = execute();
 
int main()
{
    cout << "Inside main() - never executed";
}