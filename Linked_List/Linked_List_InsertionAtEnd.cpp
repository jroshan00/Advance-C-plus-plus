// #include <stdio.h>
#include<iostream>
#include<malloc.h>
// #include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr){
    while(ptr!=NULL){

        cout<< ptr->data << endl;
        ptr=ptr->next;

    }
    
}

struct node *InsertAtTheEnd(struct node*head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    while(ptr->next!=NULL){
        p=ptr->next;
    }
    p->next=ptr;
    ptr->next=NULL;

    return head;
}

int main(){

    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=11;
    third->next=NULL;

    cout<< "Before inserion " << endl;


    LinkedListTraversal(head);

    cout<< "After inserion at the end " << endl;

    head=InsertAtTheEnd(head,7);
    LinkedListTraversal(head);




    return 0;

}