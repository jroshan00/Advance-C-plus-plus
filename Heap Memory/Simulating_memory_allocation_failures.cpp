#include <iostream>
using namespace std;
int main()
{
   /*
// It will create problem in memory allocation
   
   int *lotsofint{new int[10000000000000]};

   for(size_t i{}; i< 10000000000000; ++i){
    int*lotsofins2{new int[1000000]};
   }

//Output : 

//terminate called after throwing an instance of 'std::bad_alloc'
  //what():  std::bad_alloc
  */
/*
   //exception mechanism for dealing above scenario

   for(size_t i{0}; i<10000000000000; ++i){
    try{
        int * lots_of_i=new int[1000000];
    }catch(std::exception& ex){
        std::cout << "Something went wrong "<< ex.what() << std::endl;
    }
   }
   
   */

  //notthrow

  for(size_t i{0};i<100;++i){
    int *data=new(nothrow) int[100000000];

    if(data!=nullptr){
        cout << "Data allocated " << endl;
    }else{
        cout << "Data allocation failed "<< endl;
    }
  }

  cout<< "Program ending well "<<endl;
    return 0;
}