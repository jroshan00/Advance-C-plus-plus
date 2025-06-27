#include <iostream>
using namespace std;

class square{
    private:
    int side{};

    public:
    
    void set_side(int s){
        side=s;
    }

    int get_side(){
        return side;
    }

    int area(){
        return side*side;
    }

    int volume(){
        return side*side*side;
    }


};
int main()
{
   square s1;
   int side=s1.get_side();
   cout << "Initial side :" << side << endl;


   s1.set_side(5);
   side=s1.get_side();
   cout << "Final side :" << side << endl;

   int vol=s1.volume();
   int area=s1.area();

   cout << "Volume : " << vol <<endl;
   cout << "Area : " << area <<endl;
   
 return 0;
}