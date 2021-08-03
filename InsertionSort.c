#include <stdio.h>

void printArray(int *arr, int n)
{
  int i = 0;
  while (i < n)
  {
    printf("%d ", arr[i]);
    i++;
  }
  printf("\n");
}

void swap(int *arr, int i, int j)
{
  int temp = arr[j + 1];
  arr[j + 1] = arr[j];
  arr[j] = temp;
}

int main()
{

  int arr[] = {10, 9, 3, 8, 5, 6};
  int n = 6;
  int Cvalue;

  for (int i = 0; i <= n - 2; i++)
  {
    for (int j = i; j >= 0; j--)
    {
      Cvalue = arr[j + 1];
      printf("Cvalue = %d ", Cvalue);

      if (Cvalue < arr[j])
      {
        swap(arr, i, j);
      }
      printf("arr[%d] ", j);
    }
    //printArray(arr,n);
    printf("\n");
  }

  printArray(arr, n);
  printf("done\n");
  return 0;
}