#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int size;
  int top;
  int *arr;
};

int pop(struct stack ptr,int value)
{
  if (ptr.top == -1)
  {
   printf("Stack is empty");
  }
  else
  {
  value = ptr.arr[ptr.top];
  ptr.top = ptr.top - 1;
  return ptr.top;
  }
}

int  push(struct stack ptr, int element)
{ 
  if(ptr.top == ptr.size - 1)
  {
    printf( "Stack Overflow ");
  }
  else
  {
  ptr.top++;
  ptr.arr[ptr.top] = element;
  //printf("%d\n",ptr.top);
  }
  return ptr.top;
}

void stackTravers(struct stack ptr)
{
  for (int i = 0; i <= ptr.top; i++)
  {
    printf("%d\n", ptr.arr[i]);
  }
}

void peek(struct stack ptr,int index){

  if( index == ptr.size || index  == -1 || index > ptr.top ) {
  printf("invalid choice\n");
  }  
  else{
  printf(" The value at index %d is %d \n",index,ptr.arr[index]);
  }

}

int main()
{
struct stack st;

  st.size = 50;
  st.top = -1 ;
  st.arr = (int *)malloc(st.size * sizeof(int));
  int element,val,index;

  printf("started\n");

st.top =  push(st, 1); // IMPLEMENTATION OF PUSH FUNCTION
st.top =  push(st, 3); // IMPLEMENTATION OF PUSH FUNCTION
st.top =  push(st, 5); // IMPLEMENTATION OF PUSH FUNCTION
st.top =  push(st, 2); // IMPLEMENTATION OF PUSH FUNCTION
st.top =  push(st, 6); // IMPLEMENTATION OF PUSH FUNCTION
st.top =  push(st, 8); // IMPLEMENTATION OF PUSH FUNCTION
st.top =  push(st, 4); // IMPLEMENTATION OF PUSH FUNCT

//stackTravers(st);
printf("---------------------------------------\n");

// st.top =  pop(st,0);
// st.top =  pop(st,0);
// st.top =  pop(st,0);
// st.top =  pop(st,0);
// st.top =  pop(st,0);

printf("--------------------------------------\n");
stackTravers(st);
 
printf("--------------------------------------\n");
peek(st,6); 

  printf("done");
  return 0;
}