#include <iostream>
#include <string.h>
using namespace std;


class store{
    public:
    string_view product{};
    int mrp{0};
    int sp{0};


    store(){
        cout << "Constructor called "<<endl;
    };
    
    store(string_view product_name, int mrp_price,int selling_price){
        
        product =product_name;
        mrp=mrp_price;
        sp=selling_price;

        cout << "Custom Constructor called "<<endl;
    }
    // ~store(){};

    string_view get_product_name() const{
        return product;
    }

    int get_mrp() const{
        return mrp;
    }

    int get_sp() const{
        return sp;
    }

    friend ostream& operator<< ( ostream& out,const store& store1){
        out<< "Product name is " << store1.product << ", Selling Price is " << store1.sp
        << ", MRP given is " << store1.mrp;
        return out;
    };
    
};

class shop : public store{
    public:
    shop(){
        cout << "Constructor called "<<endl;
    };
    
    shop(string_view product_name,int mrp_price,int selling_price):store(product, mrp,sp)
    {
        cout << "Custom Constructor called "<<endl;
    
    } 
    // ~shop(){};

    // friend ostream& operator<< ( ostream& out,const shop& shop1){
    //     out<< "Product name is " << shop1.product << ", selling Price is " << shop1.sp 
    //     << ", MRP given is " << shop1.mrp<<endl;
    //     return out;
    // };

     friend ostream& operator << ( ostream& out,const shop& shop1){
        out<< "Product name is " << shop1.get_product_name() << ", selling Price is " << shop1.get_sp() 
        << ", MRP given is " << shop1.get_mrp()<<endl;
        return out;
    };


    private:

};


int main()
{
    store store1("Soap",100,95);
    cout << store1<<endl;

    shop shop1("hair",200,150);
    cout << shop1;



 return 0;
}