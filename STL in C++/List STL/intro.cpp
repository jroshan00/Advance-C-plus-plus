#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist( list <long long int> list_name){
   
   list <long long int>::iterator it;
   for(it=list_name.begin(); it != list_name.end(); ++it){
    cout <<*it<<'\t' ;
   }
   cout<<endl;

}

int main()
{
    list <long long int> roll_number{2000320210060,2000320210061,2000320210062,2000320210063};
    
    for(auto it:roll_number){
        cout <<it<<'\t';
    }
    cout<<'\n';

    cout <<"roll_number.front(): " << roll_number.front()<<endl;
    cout <<"roll_number.back(): " << roll_number.back()<<endl;
    roll_number.push_front(2000320210059);
    roll_number.push_back(2000320210064);
    cout<<"After push_front() and push_back() operations roll_number : " << endl;
    showlist(roll_number);
    roll_number.pop_front();
    roll_number.pop_back();
    cout<<"After pop_front() and pop_back() operations : " << endl;
    showlist(roll_number);
    cout<<"---------------------------------------------------------------------"<<endl;
   //Insert function needs iterator in order to insert value at a specified position.
    list <long long int>::iterator it;
    it=roll_number.begin();
    advance(it,4);

    roll_number.insert(it,2000320210064);
    showlist(roll_number);

   
 return 0;
}

/*
2000320210060   2000320210061   2000320210062   2000320210063
roll_number.front(): 2000320210060
roll_number.back(): 2000320210063
After push_front() and push_back() operations roll_number :
2000320210059   2000320210060   2000320210061   2000320210062   2000320210063   2000320210064
After pop_front() and pop_back() operations :
2000320210060   2000320210061   2000320210062   2000320210063
*/