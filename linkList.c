#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addNode(int value) {
    struct Node *newNode = NULL;
    newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    if(head==NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkedList() {
    struct Node *p;
    p = head;
    while(p!=NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
}

int main() {
    addNode(11);
    addNode(12);
    addNode(13);
    addNode(14);
    addNode(15);
    printLinkedList();
    return 0;
}

