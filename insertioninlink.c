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


struct Node * insatbeginning(struct Node * head, struct Node * ptr)
 {
   ptr -> next = head ;
   head = ptr;
   return head;
 }


void InsInbtw(struct Node * p,struct Node * head,struct Node * pos){
   
  p = (struct Node*) malloc (sizeof(struct Node));
  p->data = 1;
  p -> next = head;
  head = p;

  while(p->next != pos){
    p = p->next;
  }

  p->next = head;
  head->next = pos;

}

void InsAtEnd(struct Node * head){
  
struct Node * p  = head; 

  while(p->next!=NULL){
   p = p->next;
  }
  
  struct Node * end  = (struct Node * )malloc(sizeof(struct Node));
  p->next = end;
  end->data = 100;
  end->next = NULL;
 
}


void InsAfterNode(struct Node * GivenNode,struct Node * head){
   
  struct Node * q ;
  q = (struct Node *)malloc(sizeof(struct Node));
  
  q->data = 121;
  q->next = GivenNode->next;
  GivenNode->next = q;

}


int main()
{

  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  struct Node *p;
  struct Node *ptr;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  
  ptr = (struct Node *)malloc(sizeof(struct Node));

  head->data = 45;
  head->next = second;
   
  second->data = 456;
  second->next = third;
   
  third->data = 545;
  third->next = fourth;

  fourth->data = 46;
  fourth->next = NULL;

  ptr->data = 44;
  ptr->next = NULL;

        // LIST TRAVERSAL 

linkedtraversal(head);    

printf("first traversal end\n");
       // INSERTION AT FIRST 

// head =  insatbeginning(head,ptr);
// linkedtraversal(head);    

       // INSERTION IN BETWEEN 

//  InsInbtw(p,head,third);
//  linkedtraversal(head);    

       // Insertion at the end 

// InsAtEnd(head);
// linkedtraversal(head);    

      // Insertion after particular node

printf("Insertion after the node");
 
 InsAfterNode(second,head);
 linkedtraversal(head);    


printf("done");

return  0;
}