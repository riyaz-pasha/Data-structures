#include <stdio.h>
int main(int argc, char const *argv[])
{
    int intArray[5] = {1, 2, 3, 4, 5};
    int *pointerToAnIntArray;

    printf("&intArray-%p\n", &intArray);
    printf("intArray-%p\n", intArray); // intArray already contains the address of first element of the array
    printf("intArray[0]-%d\n", intArray[0]);
    printf("*intArray-%d\n", *intArray); // will prints the first element of the array

    printf("\n**************************************************************\n");
    // pointerToAnIntArray = &intArray; incompatible pointer types assigning to 'int *' from 'int (*)[5]
    pointerToAnIntArray = intArray;
    printf("intArray-%p\n", intArray);
    printf("pointerToAnIntArray-%p\n", pointerToAnIntArray);
    printf("*pointerToAnIntArray-%d\n", *pointerToAnIntArray); // accesses the first element of the array
    printf("*intArray-%d\n", *intArray);

    return 0;
}
