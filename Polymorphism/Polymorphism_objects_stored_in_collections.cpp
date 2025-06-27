#include <iostream>
#include <string.h>
#include <memory>
using namespace std;

class Shape
{
  public:
  Shape()=default;
  Shape(const string& description);
  ~Shape();

  void draw() const{
       cout << "Shape ::draw() called. Drawing " << m_description << endl;
  }

  protected:
  string m_description{""};
};

Shape::Shape( const string& description){
  m_description=description;
  cout << "Customized Constructor Called for Shape " << endl;
};

Shape:: ~Shape(){

  cout << "Destructor Called for Shape " << endl;
};

class Oval : public Shape
{
  public:

  Oval()=default;
  Oval(double x_radius,double y_radius, const string& description);
  ~Oval();

  double get_x_rad() const {
    return m_x_radius;
  }

  void draw() const {
    cout << "Oval:: draw() called. Drwaing " << m_description << " with m_x_radius : " <<  m_x_radius << " and with m_y_radius : " << m_y_radius<< endl;
  }

  

  protected:

  double m_x_radius{0.0};
  double m_y_radius{0.0};


};
Oval::Oval(double x_radius,double y_radius, const string& description){
   m_x_radius=x_radius;
   m_y_radius=y_radius;
   m_description=description;
   
   cout << "Customized Constructor Called for Oval " << endl;
};

Oval::~Oval(){
  cout << "Destructor Called for Oval " << endl;
};

class Circle : public Oval
{
  public:
  // using Oval::m_x_radius;
  
  Circle()=default;
  Circle(double radius, const string& description);
  ~Circle();

  void draw() const {
    cout << "Circle :: draw() called. Drawing " << m_description << " with radius : " << m_x_radius << endl;
  }
};

Circle::Circle(double radius, const string& description){
  m_x_radius=radius;
  m_description=description;
  cout << "Customized Constructor Called for Circle " << endl;

};

Circle::~Circle(){
  cout << "Destructor Called for Circle " << endl;
};


int main()
{


cout << "\n________________________________________\n"<<endl; 

Shape shape1("Shape1");

cout << "\n________________________________________\n"<<endl;

Oval oval1(2.0,3.5,"Oval1");

cout << "\n________________________________________\n"<<endl;

Circle circle1(3.3,"Circle1");

cout << "\n________________________________________\n"<<endl; 


cout << "sizeof(Shape) : " << sizeof(Shape) << endl;  //  Static : 32  Dyanic: 40,  Size will be 32 bytes as contains only one string type variable & for dynaic 8 bytes more as we add virtual.

cout <<"sizeof(Oval) : " <<sizeof(Oval) << endl;       //  Static : 48  Dyanic: 56,  32 + 8 + 8 = 48 as inheritance 32 + two double type variable & for dynaic 8 bytes more as we add virtual.

cout<<"sizeof(Circle) : " <<sizeof(Circle) << endl;    //  Static : 48  Dyanic: 56, Same as of inheritance & for dynaic 8 bytes more as we add virtual.


cout << "\n________________________________________\n"<<endl; 

/*

Shape* shape_collection[]{shape1,oval1,circle1}; //storing in pointer can work
const Shape& shape_collection[]{shape1,oval1,circle1}; //storing in refernces wont work

*/

Shape shape_collection[]{shape1,oval1,circle1};   //Objects sliced off!

for(Shape ptr : shape_collection)
{
  cout << "Inside array, sizeof(shape) : " << sizeof(ptr) << endl;

  Shape* s_ptr =&ptr;
  s_ptr -> draw();
  cout << endl;
}


cout << "\n________________________________________\n"<<endl;

//Smart Pointers

shared_ptr<Shape> shapes4[]{make_shared<Circle>(12.2,"Circle5"),make_shared<Oval>(10.0,13.5,"Oval5")};

for(auto& s: shapes4){
  s->draw();
}

cout << "\n________________________________________\n"<<endl;
return 0;

}