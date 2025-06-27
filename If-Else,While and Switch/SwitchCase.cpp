#include <iostream>
using namespace std;

int main(){
    int sign,num1,num2;
    cout << "Enter num1 ";
    cin >> num1;
    cout << "Enter num2 ";
    cin >> num2;
    cout << "Enter sign (1 for + , 2 for -, 3 for /, 4 for *,5 for %)";
    cin >> sign ;

    switch (sign)
    {
    case 1:
        cout<< num1+num2;
        break;
    case 2:
        cout<< num1-num2;
        break;
    case 3:
        cout<< num1/num2;
        break;
    case 4:
        cout<< num1*num2;
        break;
    case 5:
        cout<< num1%num2;
        break;
    default:
         cout<< "Enter a valid sign" ;
        break;
    }
}