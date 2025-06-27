#include <iostream>
using namespace std;
int and_operation(int first_num, int second_num){
    if ((first_num & second_num) == second_num){

        cout << "Yes the operator is working "<< endl;


    }
    else {
        cout : "Need s proper input";
    }


    return 1;

}


int main(){
    and_operation(5,4);
    and_operation(7,3);
    and_operation(6,2);
    and_operation(13,9);
}