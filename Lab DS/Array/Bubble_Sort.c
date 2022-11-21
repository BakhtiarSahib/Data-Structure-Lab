#include <stdio.h>

int main()
{
  int array[100], size, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < size-1; i++)
  {
    for (j = 0 ; j < size-1; j++)
    {
      if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < size; i++)
     printf("%d\n", array[i]);

  return 0;
}
