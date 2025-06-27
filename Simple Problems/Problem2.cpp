//Check weather the input as three sides of triangle is a valid triangle or not.


#include <iostream>
using namespace std;

int traingle_sides(int a,int b,int c){
    if(a+b>c & b+c>a & c+a>b){
        cout<<"The Given sides form a valid traingle"<< endl;

    }
    else{
        cout<< "Not a valid triangle"<< endl;
    }

    return 1;

}


int main(){

    int side1,side2,side3;
    cout << " Enter The sides of the gtriangle to check weather the triangle is valid or not "<< endl;
    cin>> side1>> side2>> side3;
    cout << "The Sides given are :" << endl;
    cout << side1<<"\n"<<side2<<"\n"<<side3<< endl;
    cout<< "\n _________________________________________\n"<< endl;
    traingle_sides(side1,side2,side3);
    cout<< "_____________________________";

    return 0;


}