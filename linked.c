#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedList{
    void *head;
}LinkedList_t;

typedef struct{
    int data;
    struct Node *next;
}Node_t;

void createNode(int value){
    Node_t newNode;
    newNode.data = value;
    newNode.next = NULL;
}

int main (int argc, char** argv){
  printf("test\n");
  LinkedList_t linklist;
  return 0;
}}
