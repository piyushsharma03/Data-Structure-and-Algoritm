#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int front;
    int size;
    int *arr;
    int back;
};

void enqueue(struct Node *ptr, int arr[], int value)
{
    if (ptr->back == ptr->size - 1)
    {
        printf("Overflow\n");
    }
    ptr->back++;
    arr[ptr->back] = value;
}

void traversal(struct Node *ptr, int arr[])
{
    int count = ptr->front ;
    while (count <= ptr->back)
    {
        if (count == -1)
        {
            count++;
        }
        else
        {
            printf("%d\n", arr[count]);
            count++;
        }
    }
    // printf("back = %d\n",ptr->back);
    // printf("front = %d\n",ptr->front);
}

int dequeue(struct Node *ptr, int arr[])
{
    int value;
    if(ptr->back == -1){
     printf("UNDERFLOW\n");
     return -1;    
    }
    else{
     if(ptr->front == -1){
         ptr->front++;
     }
    value = ptr->front;
    ptr->front++;
    return value;     
    }
}

int main()
{
    printf("Started\n");

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->front = -1;
    ptr->back = -1;
    ptr->size = 50;

    int *arr = (int *)malloc(ptr->size * sizeof(int));

    enqueue(ptr, arr, 1);
    enqueue(ptr, arr, 2);
    enqueue(ptr, arr, 3);
    enqueue(ptr, arr, 4);
    enqueue(ptr, arr, 5);
    enqueue(ptr, arr, 6);

    traversal(ptr, arr);


    dequeue(ptr, arr);
    dequeue(ptr, arr);
    dequeue(ptr, arr);
  
    printf("AFTER DEQUEE\n");
 
    // printf("front = %d\n", ptr->front);
    // printf("back = %d\n", ptr->back);
  
    traversal(ptr, arr);

    printf("done");

    return 0;
}