#include <iostream>
using namespace std;

const int Pen{10};
const int Eraser{15};
const int Pencil{19};
const int Circle{17};
const int Triangle{20};
const int ds{28};


int main(){


    int tool{ds};

    switch (tool)
    {
        
        case Pen : {
            cout << "Pen is active "<< endl;
        }
        break;

        case Eraser : {
            cout << "Eraser is selected " << endl;
        }
        break;

        case Circle : {
            cout << "Eraser is selected " << endl;
        }
        break;

        case Triangle : {
            cout << "Eraser is selected " << endl;
        }
        break;

        default:
        {
            cout<< "Move on " << endl;
        }
    }



    return 0;
}