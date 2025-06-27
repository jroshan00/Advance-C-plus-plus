#include <iostream>
#include <string.h>
using namespace std;


class Shape
{
  public:
  Shape()=default;
  Shape(const string& description);
  ~Shape();

  virtual void draw() const {
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

 virtual void draw() const override {
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

  virtual void /*draW()*/ draw() const override {       //if override is present then draW() can be detected in such case else code will run
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
  Shape shape1("Shape1");

cout << "\n________________________________________\n"<<endl;

  Oval oval1(2.0,3.5,"Oval1");

cout << "\n________________________________________\n"<<endl;

  Circle circle1(3.3,"Circle1");
  
cout << "\n________________________________________\n"<<endl;

Shape *shape_Collectio[]{&circle1,&oval1};

for( Shape *ptr : shape_Collectio ){
    ptr->draw();
}
   
 return 0;
}