#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  assert(scanf("%d", &n) == 1);
  if (n < 1) {
    printf("Invalid input! The number of elements must be greater than zero.");
    return -1;
  }

  int *arr = malloc((size_t)n * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed!");
    return -1;
  }

  printf("Enter %d integers.\n", n);
  for (int i = 0; i < n; i++) {
    assert(scanf(" %d", &arr[i]) == 1);
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  printf("The sum of the array elements is: %d\n", sum);

  free(arr);
  return 0;
}
