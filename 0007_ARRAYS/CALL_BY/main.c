#include <stdio.h>

// Call by Reference function
void printMemoryAddressAndValue(float *ptr) {
    printf("Address: %p\n", ptr);
    printf("Value: %f\n", *ptr);
}

// Call by Value function
float addValue(float a, float b) {
    return a + b;
}

int main() {
  float myFloat = 42.42f;

  printMemoryAddressAndValue(&myFloat);

  float userInput = 0.0f;
  printf("Enter a value (float) to add: ");
  scanf("%f", &userInput);

  float newValue = addValue(myFloat, userInput);
  printMemoryAddressAndValue(&newValue);

  return 0;
}
