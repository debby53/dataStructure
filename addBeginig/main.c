#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node* add_beg(struct node* head,int data){
    struct node* new_node=malloc(sizeof(struct node));
    new_node->data=data;
    new_node->link=head;
    return new_node;

};

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;

    int data=3;
    head=add_beg(head,data);
    ptr=head;

    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->link;
    }

    return 0;
}
