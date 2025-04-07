#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int front;
    int rear;
    int *items;
    int capacity;
}IntQueue;

void initializeQueue(IntQueue* queue, int capacity){
    queue->front=0;
    queue->rear=-1;
    queue->capacity=capacity;
    queue->items=(int *)malloc(capacity * sizeof(int));

}
int isEmpty(IntQueue* queue){
    return queue->rear<queue->front;
}
int isFull(IntQueue* queue){
    return queue->rear==queue->capacity-1;
}

void enqueue(IntQueue* queue,int value){
    if(isFull(queue)){
        printf("queue overflow\n");
        return;
    }
    queue->items[++(queue->rear)]=value;
}

int main()
{
    IntQueue queue;
    int n;
    printf("enter the size in queue");
    scanf("%d",n);
    initializeQueue(&queue,n);
    printf("enter %d integers to enqueue:\n",n);
    for(int i=0; i<n; i++){
        int num;
        scanf("%d",&num);
        enqueue(&queue,num);
    }
    printf("elements of the queue");
    for(int i=queue.front; i<=queue.rear; i++){
        printf("%d\n",queue.items[i]);
    }
    printf("size of the queue:%d\n",queue.rear-queue.front+1);
    free(queue.items);
    return 0;
}
