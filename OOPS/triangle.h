#ifndef triangle_h
#define triangle_h
#include "constant.h"

class triangle{

    public:
    // double constant=0.5;

    double get_base(){
        return base;
    }

   double get_height(){
        return height;
    }
    double get_length(){
        return length;
    }

    void set_base(double base_parameters){
        base=base_parameters;
    }

    void set_height(double height_parameters){
        height=height_parameters;
    }

    void set_length(double length_parameters){
        length=length_parameters;
    }

    double base_area(){
        return (constant*base*height);
    }
    double volume_of_prism(){
        return  (constant*length*base*height);
    }

    private:
    double base{};
    double height{};
    double length{};
};

#endif