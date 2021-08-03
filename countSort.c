#include<stdio.h>
#include<stdlib.h>
void printArray(int *Arr,int n){
 
    for(int i=0;i<n;i++){
      printf("%d ",Arr[i]);
    }
    printf("\n");
}

void countSort(int *Arr,int n){
  
    //find maximum element in array 
    int max = Arr[0];
    int i=0,c=1;

    while(i<n-1){
      if( max < Arr[i+1] ){
       max = Arr[i+1];
      } 
      i++;
    }

    //printf("max = %d\n",max);
   // create an array of size max 

   int*  count = (int *)malloc((max+1)*sizeof(int));
   int value = 0;
   i = 0;

   while(i<max+1){
     count[i] = 0; 
     i++;
   }   
   
//    for( int j = 0 ; j <= n ; j++ ){
      
//     value = Arr[j];
    
//       for(int k = j-1 ; k >= 0 ; k-- ){
//         if(  value == Arr[k] ){
//            c = count[k];
//            c++;
//            count[value] = c;
//         }
//       }
//     count[value] = c; 
//     c = 1;
//    }
     
     for(int j = 0 ; j <= n ; j++){
        count[Arr[j]] = count[Arr[j]] + 1;
     }


    printf("this is count Array = ");
    printArray(count,max);
    
    i = 0;
    c = 0;

    while( i <= max ){
        
        if(count[i] > 0 ){
            Arr[c] = i;
            count[i] = count[i] - 1;
            c++;
        }
        else{
            i++;
        }  
    }
     
}


int main(){
    
    int Arr[] = {6,5,3,6,4,9,2,1};
    int n = sizeof(Arr)/sizeof(int);
     
    //printf("%d\n",n);

    printArray(Arr,n);
    countSort(Arr,n);
    printArray(Arr,n);    
    
    return 0;
}