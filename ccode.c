#include <stdio.h>
int main() {
  int arr[] = {1, 2, 3, 2, 4}, i;
  for (i = 0; i < 5; i++)
    if (arr[i] != 2)
      printf("%d ", arr[i]);
  return 0;
}
