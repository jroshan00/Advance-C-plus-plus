#include <iostream>
using namespace std;
int main()
{
//  int arrayexample[10];
 int arrayexample[10 ]={1,2,3,4,5,6,7,8,9};
 arrayexample[22]=200;
 cout<< arrayexample[22] << endl;

 cout<< "\n__________________________\n" << endl;


 //Array Declaration : Omit Size
 cout <<"______Array Declaration : Omit Size_______"<< endl;
 int class_sizes[]{10,12,11,15,18,17};
 for (auto value :class_sizes){
    cout<<"-----> " << value << " <----" << endl;
 }


 //Operations on Arrays 
  cout <<"______Operations on Arrays_______"<< endl;
  int scores[10]{1,2,3,4,5,6,7,8,9,10};
  int sum{0};
  for(int element: scores){
    sum+=element;
  }
  cout <<sum<< endl;
return 0;
}