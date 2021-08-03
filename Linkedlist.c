#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void linkedtraversal(struct Node * ptr){

 while(ptr->next!=NULL)
 {
  printf("%d\n",ptr->data);
  ptr = ptr->next;
 }
  printf("%d\n",ptr->data);
}

int main(){
    
    struct Node * head ; 
    struct Node * second ; 
    struct Node * third ;
  
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));

head->data = 42;
head->next = second;

second->data = 43;
second->next =  third;

third->data = 44;
third->next =  NULL;

linkedtraversal(head);
  return 0;
}