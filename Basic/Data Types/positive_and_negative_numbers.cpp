#include <iostream>
using namespace std;
int main(){
    
    
    /*
    
    THESE MODIFIRES ONLY APPLY TO THE INTEGRAL TYPES :
    THOSE IN WHICH YOU CAN STORE DECIMAL NUMBERS
    
    */
   
    short short_var{-32768};  //2 bytes
    short int short_int {455};
    signed short int signed_sort{122};
    unsigned short int unsigned_short_int {456};

    int int_var {55};    //4 bytes
    signed signed_var{-66};
    signed int signed_int{-77};
    unsigned int unsigned_int{77};

    long long_var{86518};  // 4 or 8 bytes
    long int long_int{35643};
    signed long signed_long{-44444};
    signed long int signed_long_int {-4444};
    unsigned long int unsigned_long_int{98788};

    long long long_long{888888}; //8 bytes
    long long int long_long_int {999999};
    signed long long signed_long_long {4445454};
    signed long long int signed_long_long_int{-19868787};
    unsigned long long int unsigned_long_long_int{1135456445};




cout<< "________________________________" <<endl;    
    cout<<"For sort data typee : " << short_var <<endl;
    cout<<"For sort data typee : " <<  short_int <<endl; 
    cout<<"For sort signed data typee : " << signed_sort <<endl;
    cout<<"For sort data unsigned typee : " << unsigned_short_int <<endl;
cout<< "________________________________" <<endl;   
cout << "\n";
    cout<< "For int type signed or unsigned : " << int_var <<endl;
    cout<< "For int type signed or unsigned : " <<  signed_var <<endl; 
    cout<< "For int type signed or unsigned : " << signed_int <<endl;
    cout<< "For int type signed or unsigned : " << unsigned_int <<endl;
cout<< "________________________________" <<endl;   
cout<< "\n";
    cout<<"For long data type : "<< long_var <<endl;
    cout<<"For long data type : "<<  long_int <<endl; 
    cout<<"For signed data type : "<< signed_long <<endl;
    cout<<"For signed data type"<< signed_long_int <<endl;
    cout<<"For long unsigned data type : "<<unsigned_long_int <<endl;
cout<< "________________________________" <<endl;   
cout<< "\n";
    cout<< "For long long data type : "<< long_long <<endl;
    cout<< "For long long data type : "<<  long_long_int <<endl; 
    cout<< "For long long signed data type : "<< signed_long_long <<endl;
    cout<< "For long long signed data type : "<< signed_long_long_int <<endl;
    cout<< "For long long unsigned data type : "<< unsigned_long_long_int <<endl;
cout<< "________________________________" <<endl;   

}