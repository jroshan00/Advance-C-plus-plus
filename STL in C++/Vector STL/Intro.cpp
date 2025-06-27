#include <iostream>
#include <vector>
using namespace std;
int main()
{

  //Initialization of vector using list -> variable_name({value1,value2,etc})
   vector <int> vector11({0,1,2,3,4,5,6,7,8,9});

   for(int i=0;i<vector11.size();i++){
    cout<<vector11[i] << " ";
   }

   cout << " \n_______________________________________________________________ \n"<<endl;

  //Initialization of vector using single value ->variable_name(int_size,value)
  vector <string> vector12(10,"P");
  for(int i=0;i<vector12.size();i++){
    cout<<vector12[i] << " ";
   }


   cout << " \n_______________________________________________________________ \n"<<endl;

   //Inialization of vector using Another vector

   vector <string> vector13(vector12);
   for(int i=0;i<vector13.size();i++){
    cout<<vector13[i] << " ";
   }

 return 0;
}