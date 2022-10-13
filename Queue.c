#include<stdio.h>
#include<stdbool.h>

struct Queue {
    int arr[5];
    int front, rear;
} queue;

// check the queue is empty or not
bool isEmpty() {
    if(queue.front==-1){
        return true;
    }
    return false;
}

// check the queue is full or not
bool isFull() {
    if(queue.rear==4){
        return true;
    }
    return false;
}

// add element int queue
int enQueue(int data) {
    if(isFull()) {                  // check que is full or not
        printf("Queue is full...\n");
        return -1;
    } else {                        // adding element
        queue.arr[++queue.rear] = data;
    }
    if(queue.front==-1)             // if front point -1 the make it 0
        queue.front = 0;
}

// delete element from queue
int deQueue() {
    if(isEmpty()){      // check empty queue befor removing
        printf("Queue already empty, nothing to delete...\n");
        return -1;
    }
    if(queue.front>=queue.rear){ // if queue has only one element then make queue is empty else delete element
        queue.front = -1;
        queue.rear = -1;
    } else {
        queue.front++;
    }
}

// print queue
int print() {
    if(isEmpty()) {                 // check empty queue
        printf("Queue is Empty\n");
        return -1;
    }
    printf("\n");
    for(int i=queue.front; i<=queue.rear; i++){
        printf("%d ",queue.arr[i]); // print queue if not empty.
    }
}

int main(){
    queue.front = -1;
    queue.rear = -1;

    print();
    enQueue(11);
    enQueue(12);
    enQueue(13);
    enQueue(14);
    enQueue(15);
    enQueue(16);
    print();
    deQueue();
    deQueue();
    print();
    return 0;
}