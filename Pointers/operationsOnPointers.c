#include <stdio.h>
int main(int argc, char const *argv[])
{
    int intArray[5] = {10, 20, 30, 40, 50};
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

    printf("\n**************************************************************\n");
    printf("*pointerToAnIntArray+1-%d\n", *pointerToAnIntArray + 1);     // accesses the first element of the array and increment it by 1
    printf("pointerToAnIntArray+1-%p\n", pointerToAnIntArray + 1);       // accesses the second elements address
    printf("*(pointerToAnIntArray+1)-%d\n", *(pointerToAnIntArray + 1)); // accesses the second element of the array

    printf("\n**************************************************************\n");
    printf("*pointerToAnIntArray+2-%d\n", *pointerToAnIntArray + 2);     // accesses the first element of the array and increment it by 2
    printf("pointerToAnIntArray+2-%p\n", pointerToAnIntArray + 2);       // accesses the third elements address
    printf("*(pointerToAnIntArray+2)-%d\n", *(pointerToAnIntArray + 2)); // accesses the third element of the array

    printf("\n**************************************************************\n");
    for (int i = 0; i < 5; i++)
    {
        printf("pointerToAnIntArray-%p\n", pointerToAnIntArray);
        printf("*pointerToAnIntArray-%d\n\n", *pointerToAnIntArray);

        pointerToAnIntArray++;
    }
    return 0;
}
