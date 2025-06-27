
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numericallogic(int x){
    while (x>=10){
        int sum=0;
        while(x>0){
            sum= sum + x%10;
            x=x/10;
        }
    x=sum;

    }
    // string s= to_string(x);
    // for(int i=0;i<=s.length();i++){
    //     sum=sum+int(s[i]);
    // }

return x;
    
}

int main(){

    int res=numericallogic(12345);
    cout << res;
    return 0;

}