#include <iostream>
int main(){
    int age;
    std::string name;
    std::cout <<"Please type in your Name: " << std::endl;
    std::cin >> name;

    std::cout <<"Please type in your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello my name is :" << name <<" I am " << age << " years old" << std::endl;
    
    return 0;

}