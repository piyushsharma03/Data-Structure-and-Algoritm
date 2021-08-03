#include<stdio.h>

int linearSearch(int arr[],int size,int element){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
        printf("Found\n\n");    
        return i;
        }
    }
    printf("Not Found \n");
    return -1;
}


int BinearySearch(int arr[],int low,int element,int high){

  int mid;

while(low<=high){
    mid = (low+high)/2;

   if(arr[mid] == element){
       printf("element found at %d\n",mid);
    return 1;
   }    
   else if(arr[mid]<element){
      low = mid+1;
   }
   else{
      high = mid-1;
   }
 }
 return 0;
}

int main(){

    int arr[]={1,40,45,50,55,70,85,345,435};
    int size = sizeof(arr)/sizeof(int);
    int element = 85;

    // linearSearch(arr,size,element);

    BinearySearch(arr,0,element,size-1);

    return 0;
}