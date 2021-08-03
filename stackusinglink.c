#include <stdio.h>
#include <stdlib.h>

struct Node
{
  struct Node * top;
  int data;
  struct Node *next;
};

int push(struct Node * ptr,struct Node * secptr,struct Node * top)
{
   if(top == NULL)
   { 
    printf("STACK OVERFLOW\n"); 
   }
   else{  
     ptr->next = secptr;
     top = ptr->next;
   }
}

int main()
{
  struct Node * top ;
  struct Node * head  = (struct Node *) malloc (sizeof(struct Node));
  struct Node * second = (struct Node *) malloc (sizeof(struct Node));
  struct Node * third  = (struct Node *) malloc (sizeof(struct Node));
  struct Node * fourth = (struct Node *) malloc (sizeof(struct Node));
  struct Node * fifth = (struct Node *) malloc (sizeof(struct Node));

  head->data = 1;
  second ->data = 2;
  third->data = 3;
  fourth->data = 4;
  fifth->data = 5;
  
  top = head;
  push(head,second,top);
  push(second,third,top);
  push(third,fourth,top);
  push(fourth,fifth,top);

  printf("%d\n",top->data);
  return 0;
}