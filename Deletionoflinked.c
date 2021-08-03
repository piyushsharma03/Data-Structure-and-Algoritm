#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void linkedtraversal(struct Node * ptr){

 while(ptr->next!=NULL)
 {
  printf("%d\n",ptr->data);
  ptr = ptr->next;
 }
printf("%d\n",ptr->data);
}

struct Node*  DelFromFirst(struct Node * head){
 
  struct Node * p = head;
  head = p->next;
  free(p);
  return head;

}

int main()
{

  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  
  head->data = 45;
  head->next = second;
   
  second->data = 456;
  second->next = third;
   
  third->data = 545;
  third->next = fourth;

  fourth->data = 46;
  fourth->next = NULL;

  
 // LIST TRAVERSAL 
linkedtraversal(head);    

 // Deletion from front 
 // head = DelFromFirst(head);
 // printf("after deletion of first node\n");
 // linkedtraversal(head);

printf("done");

return  0;
}