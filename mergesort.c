#include <stdio.h>

void  printArray(int *A,int n){
  int i = 0;
  while(i<n){
    printf("%d " , A[i]);
    i++;
  }
 printf("\n");
}

void merge(int *A, int low, int mid, int high)
{
  int i, j, k;
  i = low;
  j = mid + 1;
  k = 0;
  int B[7];

  while (i <= mid && j <= high)
  {

    if (A[i] < A[j])
    {
      B[k] = A[i];
      i++;
      k++;
    }
    else
    {
      B[k] = A[j];
      j++;
      k++;
    }
  }
  while (i <= mid)
  {
    B[k] = A[i];
    i++;
    j++;
  }

  while (j <= high)
  {
    B[k] = A[j];
    j++;
    k++;
  }
 for (int i = 0; i < high; i++)
 {
   A[i] = B[i];
 }
  printf("done\n");
}

void mergeSort(int *A, int low, int high)
{
  if (low < high)
  {
  int mid = (low + high) / 2;
  mergeSort(A, low, mid);
  mergeSort(A, mid + 1, high);
  merge(A, low, mid, high);
  }
}

int main()
{
  int A[] = {7, 8, 9, 2, 4, 5};
  int n = 6;

  printArray(A,n);
  mergeSort(A, 0, n);
  printArray(A,n);

  return 0;
}