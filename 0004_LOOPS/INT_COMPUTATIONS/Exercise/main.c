#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t inputNumber = 0;

    printf("Please enter a unsinged integer: ");
    scanf("%u", &inputNumber);

    // sum of digits
    uint32_t numDigits = 0;
    uint32_t temp = inputNumber;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }
    printf("sum of digits: %u\n", numDigits);

    // cross sum
    uint32_t crossSum = 0;
    temp = inputNumber;
    for (size_t i = 0; i < numDigits; i++) {
        crossSum += temp % 10;
        temp /= 10;
    }
    printf("crossSum: %u\n", crossSum);

    return 0;
}
