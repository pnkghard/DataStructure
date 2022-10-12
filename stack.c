#include<stdio.h>
#include<stdlib.h>

/* creating stack in c*/

// creating struct with member arr having some capacity and count in top
struct stack {
    int arr[5];
    int capacity;
    int top;
};

// Globel declaration of stack s
struct stack s;

// Function for push data in stack
void push(int data) {
    if(s.top == s.capacity-1) {
        printf("Stack is Full....");
        exit(1);
    }
    s.arr[++s.top] = data;
}

// function for Delete data from Stack
int pop() {
    if(s.top==-1) {
        printf("Stack is empty....");
        exit(1);
    }
    return s.arr[s.top--];
}


// Function for printing data in stack
void printStack() {
    int i = 0;
    printf("in Stack :");
    for(i=0; i<=s.top; i++) {
        printf(" %d", s.arr[i]);
    }
    printf("\n");
}


// Main driven function
int main() {
    int delValue = 0;
    s.capacity = 5;
    s.top = -1;

    printf("\nPush 10, 30, 40, 20 ");
    push(10);
    push(30);
    push(40);
    push(20);
    printStack();

    printf("Pop once : ");
    delValue = pop();
    printf("%d is popped\n", delValue);
    printStack();

    return 0;
}