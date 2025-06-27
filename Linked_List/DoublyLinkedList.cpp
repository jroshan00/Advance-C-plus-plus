// #include <stdio.h>
#include<iostream>
#include<malloc.h>
// #include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void LinkedListTraversal(struct node *ptr){
    struct node *revptr=(struct node*)malloc(sizeof(struct node));
    while(ptr!=NULL){

        cout<< ptr->data << endl;
        ptr=ptr->next;

    }
    
    cout<< "The Last Elemet "<<endl;
    // revptr=ptr;
    // while(revptr!=NULL){

    //     cout<< revptr->data << endl;
    //     revptr=revptr->next;

    // }
    
}

int main(){

    struct node *N1=(struct node*)malloc(sizeof(struct node));
    struct node *N2=(struct node*)malloc(sizeof(struct node));
    struct node *N3=(struct node*)malloc(sizeof(struct node));

    N1->data=7;
    N1->next=N2;
    N1->prev=NULL;

    N2->data=8;
    N2->next=N3;
    N3->prev=N2;

    N3->data=11;
    N3->next=NULL;
    N3->prev=N2;

    LinkedListTraversal(N1);

    return 0;

}