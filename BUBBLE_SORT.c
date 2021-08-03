#include<stdio.h>

 void printArray(int *arr){
  int i = 0;
    while(i<=5){
    printf("%d ",arr[i]);
    i++;
    }
 }

 void swap(int *arr,int i){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
 }

int main(){

  int arr[] = {7,4,2,8,1,3};
 for (int j = 4; j >= 0 ; j--)
 {
  for (int i = 0; i < 6 ; i++)
  {
    if(arr[i+1]<arr[i]){
      swap(arr,i);
    }
  printArray(arr);
    printf("\n");
  }
  printf("\n");
 }
   printf("done\n");
    return 0;
}