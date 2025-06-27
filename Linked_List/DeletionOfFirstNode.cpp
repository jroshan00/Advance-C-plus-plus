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

struct node *DeleteTheFirstNode(struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
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

    LinkedListTraversal(head);

    return 0;

}