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

struct node *InsertAtTheIndex(struct node*head,int data,int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    struct node *q=(struct node*)malloc(sizeof(struct node));
    int i=0;
    while(i!=index-1){
        q=q->next;
        i++;
    }
    ptr->data=data;
    ptr->next=q->next;
    q->next=ptr;

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

    cout<< "After inserion at the begining " << endl;

    head=InsertAtTheIndex(head,5,1);
    LinkedListTraversal(head);
    return 0;

}