#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}node;



int main()
{
    node *head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=45;
    head->link=NULL;


    node *current=(node*)malloc(sizeof(node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    node *current2=(node*)malloc(sizeof(node));
    current2->data=3;
    current2->link=NULL;
    current->link=current2;

    printf("%d %d %d",head->data,current->data,current2->data);
    return 0;
}
