#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
 typedef struct{
     int items[MAX_SIZE];
     int front;
     int rear;
 }IntQueue;
 void initializeQueue(IntQueue* queue){
 queue->front=0;
 queue->rear=-1;
 }

 int isEmpty(IntQueue* queue){
 return queue->rear< queue->front;
 }
 void enqueue(IntQueue* queue, int value){
 if(queue->rear==MAX_SIZE-1){
        printf("queue overflow\n");
 return;

 }
 queue->items[++queue->rear]=value;

 }
 int main(){
 IntQueue queue;
 initializeQueue(&queue);
 enqueue(&queue,10);
 enqueue(&queue,20);
 enqueue(&queue,30);

 printf("element of the queue\n");
 for(int i=queue.front; i<=queue.rear; i++){
    printf("%d\n",queue.items[i]);
 }
 printf("size of the queue:%d\n",queue.rear-queue.front+1);
 return;


 }


