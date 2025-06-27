#include <iostream>
#include <string.h>
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
  // string des="A Shape ";

cout << "\n________________________________________\n"<<endl; 

  Shape shape1("Shape1");
  shape1.draw();

cout << "\n________________________________________\n"<<endl;

  Oval oval1(2.0,3.5,"Oval1");
  oval1.draw();

cout << "\n________________________________________\n"<<endl;

  Circle circle1(3.3,"Circle1");
  circle1.draw();

cout << "\n________________________________________\n"<<endl;


//Static binding with base class pointer

cout << " \n**********Static binding with base class pointer********\n" << endl;

Shape * shape_ptr=&shape1;
shape_ptr->draw();  //We would wish for   Shape:: draw() to be called

shape_ptr= &oval1;
shape_ptr->draw();  //We would wish for Oval:: draw() to be called

shape_ptr=& circle1;
shape_ptr->draw();  //We would wish for Circle:: draw() to be called

cout << "\n________________________________________\n"<<endl;

Shape * shape_collection[]{&shape1,&oval1,&circle1};

for(Shape*ptr : shape_collection){
  ptr->draw();
}


cout << "\n________________________________________\n"<<endl;
   //a base pointer or reference managing derived class objects
    

  //  Shape * shape1= new circle;
  //  Shape * shape2= new rectangle;
  //  Shape * shape3= new oval;

  //  Shape& ref1 {&shape1};
  //  Shape& ref2 {&shape2};
  //  Shape& ref3 {&shape3};
 return 0;

}





/*


________________________________________

Customized Constructor Called for Shape
Shape ::draw() called. Drawing Shape1

________________________________________

Customized Constructor Called for Oval
Oval:: draw() called. Drwaing Oval1 with m_x_radius : 2 and with m_y_radius : 3.5       

________________________________________

Customized Constructor Called for Circle
Circle :: draw() called. Drawing Circle1 with radius : 3.3

________________________________________


**********Static binding with base class pointer********

Shape ::draw() called. Drawing Shape1
Shape ::draw() called. Drawing Oval1
Shape ::draw() called. Drawing Circle1

________________________________________

Shape ::draw() called. Drawing Shape1
Shape ::draw() called. Drawing Oval1
Shape ::draw() called. Drawing Circle1

________________________________________

Destructor Called for Circle
Destructor Called for Oval
Destructor Called for Shape
Destructor Called for Oval
Destructor Called for Shape
Destructor Called for Shape 
*/