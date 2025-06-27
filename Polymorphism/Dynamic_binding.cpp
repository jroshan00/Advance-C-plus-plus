#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
  public:
  Shape()=default;
  Shape(const string& description);
  ~Shape();

  virtual void draw() const{
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

  virtual void draw() const {
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

  virtual void draw() const {
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


void draw_shape_v1(Shape *v1_ptr){
    v1_ptr->draw();
}

void draw_shape_v2(Shape& v2_ptr){
    v2_ptr.draw();
}

int main(){
  cout << "\n*************Start************\n\n" << endl;


  Shape shape1("Shape1");
  Oval oval1(2.0,3.5,"Oval1");
  Circle circle1(3.3,"Circle1");

cout   << "\n_____________________________\n"<< endl;

//Can only be called as draw is virtual as a part of dynamic binding in polymorphism.
  Shape *ptr_shape=&shape1;
  ptr_shape->draw();

//   Shape *ptr_shape=&oval;     //will generate error as not declared virtual
//   ptr_shape.get_x_rad();

cout   << "\n_____________________________\n"<< endl;
  
  draw_shape_v1(&shape1);
  draw_shape_v1(&oval1);
  draw_shape_v1(&circle1);

cout   << "\n_____________________________\n"<< endl;

  draw_shape_v2(shape1);
  draw_shape_v2(oval1);
  draw_shape_v2(circle1);

  cout<< "\n\n*********The End***********\n\n"<<endl;

}
/*

*************Start************


Customized Constructor Called for Shape
Customized Constructor Called for Oval
Customized Constructor Called for Circle
Shape ::draw() called. Drawing Shape1
Oval:: draw() called. Drwaing Oval1 with m_x_radius : 2 and with m_y_radius : 3.5       
Circle :: draw() called. Drawing Circle1 with radius : 3.3

_____________________________

Shape ::draw() called. Drawing Shape1
Oval:: draw() called. Drwaing Oval1 with m_x_radius : 2 and with m_y_radius : 3.5       
Circle :: draw() called. Drawing Circle1 with radius : 3.3


*********The End***********


Destructor Called for Circle
Destructor Called for Oval
Destructor Called for Shape
Destructor Called for Oval
Destructor Called for Shape
Destructor Called for Shape


*/