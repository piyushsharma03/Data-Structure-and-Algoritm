#include<stdio.h>
#include<stdlib.h>
 
void  printArray(int *arr,int n){
  int i = 0;

  while(i<n){
    printf("%d " , arr[i]);
    i++;
  }
 printf("\n");
}

 void swap(int *arr,int j,int i){

   int temp = arr[j];
   arr[j] = arr[i+1];
   arr[i+1] = temp;

}

void selectionSort(int *arr,int n){
    
  int min;
  int i,j;

  for( j = 0 ; j < n-1 ; j++){

    min = arr[j];

    for ( i = j; i < n-1 ; i++)
    { 
        if(arr[i+1] < min){
        min = arr[i+1];
        swap(arr,j,i);
        }    
    }
  } 
}
   
  
int main(){

    int arr[] = {8,0,7,3,1};
    int n = 5;

    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,5);
    printf("done\n");

    return 0;
}