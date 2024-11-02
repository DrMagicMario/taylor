#include<stdio.h>
#include<stdlib.h>

int main (int argc, char** argv){
  printf("test\n");
  return 0;
}

struct LinkedList{
    void *head;
};

struct Node {
    int data;
    struct Node *next;
};
