#include<stdio.h>

void  printArray(int *A,int n){
  int i = 0;
  while(i<n){
    printf("%d " , A[i]);
    i++;
  }
 printf("\n");
}

int partition(int *A,int low, int high){ 

  int pivot = A[low];
  int i = low+1;
  int j = high;
  
do{

  while(A[i] <= pivot){
    i++;
  }

  while(A[j] > pivot){
    j--;
  }
  
 if(i<j){
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;
 }
 
 //printf("%d %d \n",i,j);
}while(i<j);


int temp = A[j];
A[j] = A[low];
A[low] = temp;

return j;
}

void quicksort(int *A , int low, int high){

  int partitionindex; 

  printArray(A,6);

  if(low<high){
  partitionindex  =  partition(A,low,high);
  quicksort(A, low , partitionindex - 1);
  quicksort(A, partitionindex + 1 , high);
  }

}

int main(){
    
  int A[] = {4,2,5,3,1,6};
  int n = sizeof(A)/sizeof(int);

  printArray(A,n);
  quicksort(A,0,n-1);
  printArray(A,n);
  
  printf("done");
  return  0;
}