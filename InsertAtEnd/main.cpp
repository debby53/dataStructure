#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *link;

};

struct node* add_end(struct node* head,int data){
    struct node* new_node=malloc(sizeof(struct node));
    new_node->data=data;
    new_node->link=NULL;
    if(head==NULL){
        return new_node;
    }
    struct node* temp=head;
    while(temp->link !=NULL){
        temp=temp->link;
    }
    temp->link=new_node;
    return head;

};
