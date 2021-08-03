#include<stdio.h>
#include<stdlib.h>

 struct Node {
   int data;
   struct Node * next;
 };
  
struct Node * push(struct Node * top,int x){

  struct Node * n = (struct Node *)malloc(sizeof(struct Node));

  if(n == NULL){
   printf("STACK OVERFLOW\n");
  }
  else{
      n->data = x;
      n->next = top; 
      return n;
  }
}

void traversal(struct Node * top){

    while(top!=NULL){
        printf("%d\n",top->data);
        top = top->next; 
    }
}
 
struct Node * pop(struct Node * top){

 if(top == NULL){
     printf("STACK UNDERFLOW");
 }
 else{
    struct Node * ptr;
    ptr = top;
    top = top->next;
    free(ptr);
    return top;
 }
}
int main(){ 
   
    struct Node * top = NULL;

    printf("Started\n");
    
    top  = push(top,1);
    top  = push(top,2);
    top  = push(top,3);
    top  = push(top,4);
    top  = push(top,5);

    traversal(top);
   printf("----------------------------\n");     
    top =  pop(top);
    top =  pop(top);
 
    traversal(top);

    printf("done\n");
    return  0;
}