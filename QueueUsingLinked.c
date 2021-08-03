#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node * next;
};

struct Node * enqueue(struct Node *front, struct Node *rear, int value)
{
  struct Node * n = (struct Node *)malloc(sizeof(struct Node));

  if (n == NULL)
  {
    printf("QUEUE IS FULL\n");
  }
  else
  {
    n->data = value;
    n->next = NULL;
    if (rear  == NULL || front == NULL)
    {
      front = n;
      rear = n;
      return front;
    }
    else
    {
      rear->next = n;
      rear = n;
      return rear;
    }
  }
}

 void traversal(struct Node *front)
 {
   while (front->next != NULL)
   {
     printf("%d\n", front->data);
     front = front->next;
   }
    printf("%d\n", front->data);
 }

struct Node * deque(struct Node * front)
{
  struct Node * ptr;

 if(front == NULL){
   printf("QUEUE IS EMPTY\n");
 }
 
 ptr = front;
 front = ptr->next;
 free(ptr);

 return front;
}

int main()
{

  struct Node *front ;
  struct Node *rear ;
  
  front = NULL;
  rear = NULL;

  front =  rear =  enqueue(front, rear, 1);
  rear =  enqueue(front, rear, 2);
  rear =  enqueue(front, rear, 3);
  rear =  enqueue(front, rear, 4);
  rear =  enqueue(front, rear, 5);
  rear =  enqueue(front, rear, 6);
 
  
  traversal(front);

  front = deque(front);
  front = deque(front);
  front = deque(front);
  front = deque(front);

   printf("After deque-------------------------------------\n");
  // printf("front->data = %d\n",front->data);

  traversal(front);
  printf("done\n");

  return 0;
}