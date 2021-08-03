#include<stdio.h>
#include<stdlib.h>

struct Node {
    int * arr; 
    int size;
    int front;
    int rear;
};

 void enqueR(struct Node * ptr,int value){

   if(ptr->rear == ptr->size-1){
    printf("QUEUE IS FULL\n");
   }
    ptr->rear++; 
    ptr->arr[ptr->rear] = value; 
 }


 int dequeF(struct Node * ptr){
    int value;
    if(ptr->rear == -1){
         printf("QUEUE IS EMPTY\n");
    }
    ptr->front++;
    value = ptr->arr[ptr->front];
    return value;
  
}
 void traversal(struct Node * ptr){
  
  while(ptr->rear >= ptr->front ){
   printf("%d\n",ptr->arr[ptr->front]);
   ptr->front++;
  }

 }

  void enqueF(struct Node * ptr,int value)
  {
      if(ptr->front == ptr->size-1)
      {
          printf("QUEUE IS FULL\n");
      }
    ptr->front++;
    ptr->arr[ptr->front] = value;
    ptr->rear++;

  }

int dequeR(struct Node * ptr){
int value;
  if(ptr->rear == -1){
      printf("QUEUE IS EMPTY");
  } 
  value = ptr->arr[ptr->rear];
  ptr->rear--;
  return value;
}

int main(){

    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->size = 50;
    ptr->arr = (int *)malloc(ptr->size*sizeof(int));
    ptr->front = -1;
    ptr->rear = -1;
   
    enqueF(ptr,1);
    enqueF(ptr,2);
    enqueF(ptr,3);
    enqueF(ptr,4);

    traversal(ptr);  

    dequeR(ptr);

    traversal(ptr);  


   printf("done\n");
    return 0;
}