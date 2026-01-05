#include <stdio.h>

int main()
{
    int aValue = 42;
    printf("Initial value:\t\t\t\t\t%d\n", aValue);

    int *myPointer = &aValue;
    printf("Value through pointer:\t\t\t\t%d\n", *myPointer);
    *myPointer = 187;
    printf("Modified value of aValue through myPointer:\t%d\n", *myPointer);

    int *yourPointer = myPointer;
    *yourPointer = 69;

    printf("Address of aValue:\t\t\t\t%p\n",  &aValue);
    printf("Address of aValue:\t\t\t\t%p\n",  &myPointer);
    printf("Address of aValue:\t\t\t\t%p\n",  &yourPointer);

    return 0;
}
