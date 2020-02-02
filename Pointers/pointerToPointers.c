#include <stdio.h>
int main(int argc, char const *argv[])
{
    int normalIntTypeVariable = 100;
    int *pointerToNormalVariable;
    int **pointerToPointerVariable;

    pointerToNormalVariable = &normalIntTypeVariable;
    pointerToPointerVariable = &pointerToNormalVariable;

    printf("normalIntTypeVariable-%d\n", normalIntTypeVariable);
    printf("*pointerToNormalVariable-%d\n", *pointerToNormalVariable);
    printf("**pointerToPointerVariable-%d\n", **pointerToPointerVariable);

    printf("\n**************************************************************\n");
    printf("&normalIntTypeVariable-%p\n", &normalIntTypeVariable);
    printf("pointerToNormalVariable-%p\n", pointerToNormalVariable);

    printf("\n**************************************************************\n");
    printf("&pointerToNormalVariable-%p\n", &pointerToNormalVariable);
    printf("pointerToPointerVariable-%p\n", pointerToPointerVariable);

    return 0;
}
