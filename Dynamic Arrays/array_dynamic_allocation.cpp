#include <iostream>
using namespace std;

//  int traversal(int *ptr_array[],int size)
//  {

//         for(size_t i{}; i<size;++i){
//          cout << ptr_array[i] << ",";
//     }

// }

int main()
{   
   size_t size{10};
   double *p_salaries {new double[size]}; // salaries will contain garbage value

   int *p_students{new(nothrow) int[size]{}}; // All values are initialized to 0

   double *p_scores{new(nothrow) double[size]{1,2,3}}; //Allocation of memmory used for array of 
                                                       // size double vars. First 3 will initialized
                                                       //with 1,2,3 and rest to 0
 cout << "\n Uninialized pointer array \n "<< endl;    
    for(size_t i{}; i<size;++i){
         cout << p_salaries[i] << ",";
    }
    cout << " \n"<< endl;
 cout << "Inialized pointer array \n"<< endl;
    for(size_t i{}; i<size;++i){
         cout << p_students[i] << ",";
    }
    cout << " \n"<< endl;
 cout << " Customized Inialized pointer array\n"<< endl;
    for(size_t i{}; i<size;++i){
         cout << p_scores[i] << ",";
    }
    cout << " \n"<< endl;
//null checker
    if(p_scores){

        for(size_t i{}; i<size;++i){
            cout << "value : " << p_scores[i] << " : " << *(p_scores + i ) << endl;
        }
    }

    // cout << p_scores;
 return 0;
}