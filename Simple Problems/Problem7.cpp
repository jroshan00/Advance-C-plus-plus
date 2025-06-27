// This question has to be solved when vector concept is covered
#include <iostream>
#include <vector>
using namespace std;

int Number(int a){
    vector<int> array;
    int totalnumebrs=0;
    int count=0;
    for(int i=1;i<=a;i++){
        printf("%d \n",i);
        array.push_back(i);
    }
    for(count;count<sizeof(array);count++){
        continue;
    }
    cout << " Total Number of elements in the array are : " << endl;
    cout << count << endl; //count is always 24 because 
                           //the size of vector<int> array is 24; May be I am wrong.

    return 1;
}

int main(){

    int number;

    cout<< "Enter The Number : " << endl;
    cin>> number;
    Number(number);

    return 0;

}