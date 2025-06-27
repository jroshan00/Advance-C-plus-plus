#include <iostream>
using namespace std;

void enter_age(int age)
  {
    if(age>18){
        cout << "You are adult " << endl;
    }else {
        cout << "Sorry, you are too young "<<endl;
    }
  };

  int max(int ab, int bc){
    if(ab>bc){
      return ab;

    }else{
      return bc;
    }
  }
  // // THE FUNCTION THAT DOESN'T TAKE PARAMETERS AND RETURN NOTHING

void say_hello(){
  cout << "Hello there " << endl;
  return; // You could omit this return statement for funtions returning void
}
 //Funtion that takes no parameters and results something
int int_num(){
  return 99;
}

double increment_multiply (double a, double b){
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;

  double result = ((++a)*(++b));
  //Inside function, after increment : 

  cout << "a : " << a << endl;
  cout << "b : " << b << endl;

  return result;

}



int main()
{
   /*
   void function_name(){

    // operation
    //processing

    return return_type;
   }


   // calling or using a function:

   result_var = function_name(arg1,arg2);

   */
  
  enter_age(23);

  int num =max(44,55);

  cout << num << endl;

  say_hello();

  cout<< max(1,2) << endl;  //Direct call of function 
  
  int eenum = int_num();
  cout << eenum << endl ;

  char d{55};
char e{41};

double f{12.33};
double g{51.25};

cout << endl;
cout << "Calling min function with char arguments : " << endl;

int minimun_number {max(d,e)}; //d,e will implycitly converted to int 
cout << "minimum_number : " << minimun_number << endl;
cout << "static_cast <int> (d) : " << static_cast <int> (d) <<endl;
cout << "static_cast <int> (e) : " << static_cast <int> (e) <<endl;

cout << "Calling max function with double  arguments : " << f <<","<< g << " : ";
int maximun_number=max(f,g);
cout << maximun_number <<endl;

cout << increment_multiply(2,3)<<endl;
cout << increment_multiply(f,g)<< endl;

cout << "Outside funtion " << endl;

cout << "After passing to the function f,g : " << f <<","<< g << endl;
 return 0;

}