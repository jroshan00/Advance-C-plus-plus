#include <iostream>

int main( int argc, char **argv){
//     //compiler time error
argc=10;
    std::cout << "Hello World! " << argc<< " " << argv << std::endl;

//     //Run time error
//     //int value = 7/0
//     //std::cout << "value :" << value << std::endl
    return 0;
}