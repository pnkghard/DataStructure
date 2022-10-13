#include<stdio.h>
#include<stdbool.h>

int arr[5];
int front = -1, rear = -1;

bool isEmpty() {
    if(front==-1) {
        return true;
    }
    return false;
}

bool isFull() {
    if(rear==4) {
        return true;
    }
    return false;
}

int enQueue(int data) {
    if(isFull()) {
        printf("Queue is Full....\n");
        return -1;
    }

    arr[++rear] = data;
    
    if(front==-1){
        front = 0;
    }
    return -1;
}

int deQueue() {
    if(isEmpty()) {
        printf("Queue is already Empty....\n");
        return -1;
    }
    if(front>=rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    return -1;
}

void print() {
    if(isEmpty()) {
        printf("Queue is empty...\n");
    } else {
        for(int i=front; i<=rear; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nQueue printing completed.....\n");
    }
}

int main() {
    while(1) {
        int ch;
        printf("Enter 1 for add in Que and 2 for remove from que and 3 for print que : ");
        scanf("%d", &ch);
        if(ch==1){
            int data;
            printf("Data for adding : ");
            scanf("%d", &data);
            enQueue(data);
        } else if (ch==2) {
            deQueue();
        } else if (ch==3) {
            print();
        } else {
            printf("Wrong selection...");
        }
    }
    
    
    // print();
    // enQueue(5);
    // enQueue(7);
    // enQueue(9);
    // enQueue(3);
    // enQueue(6);
    // enQueue(1);
    // print();
    // deQueue();
    // deQueue();
    // print();
    return 0;
}