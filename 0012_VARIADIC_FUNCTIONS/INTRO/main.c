#include <stdarg.h> // Variadic Functions Libary
#include <stdio.h>  // Standard Input/Output-Bibliothek

// Function for calculating the sum of a variable number of arguments
int calcSumVariadicFunc(int count, ...) {
  va_list vp;
  int sum = 0;

  va_start(vp, count);
  for (int i = 0; i < count; i++) {
    sum += va_arg(vp, int);
  }

  va_end(vp);
  return sum;
}

int main() {
  printf("Sum of 1, 2, 3 --> %d\n",
         calcSumVariadicFunc(3, 1, 2, 3)); // Expected output: 6
  printf("Sum of 4, 5, 6, 7, 11, 12, 13 --> %d\n",
         calcSumVariadicFunc(7, 4, 5, 6, 7, 11, 12, 13));

  return 0;
}
