#include <iostream>
#include <array>
using namespace std;
int main()
{
  int scores[]{1,2,3,4,5,6,7,8,9,10};
  cout<< " ______Here the size of one int is 4 bits so for 10 elements 4*10=40 _____" << endl;
  cout << sizeof(scores)<<endl;

  cout << " ___now to get the numbers of elements we divide by the size of one int____" << endl;
  cout << sizeof(scores)/sizeof(int)<<endl;

  // size funtion is used in C++17 as a std funtion that directly provides the size of elements in numbers
  cout<< "_____________size funtion is used in C++17 as a std funtion >>>   size(array_name i.e, scores)  <<<  _____________ " <<endl;
  cout<< size(scores)<< endl;
  array <int,5> goa{1,2};

  cout<< goa.size();
return 0;
}