#include <iostream>
using namespace std;
int main()
{
  int INTarray[]{1,2,3,4,5,6,7,8,9};
  for(int i:INTarray){
    cout<< i << ",";
  }

  cout<< "\n"<<endl;

  cout<< "After Insertion at  INTarray[450]  corrupted or it will crash " << endl;
  INTarray[450]=788;
  for(int i:INTarray){
    cout<< i << ",";
  }
  //Output shows the data inserted out of the boundary of the INTarray is vanished or corrupted

  cout<< "//Output shows the data inserted out of the boundary of the INTarray is vanished or corrupted or it will crash "<<endl;
  cout << " INTarray[45]=788 ----->>  "<<INTarray[450] << endl;
return 0;
}