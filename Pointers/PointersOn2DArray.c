#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arrayOf2D[2][3] = {{110, 120, 130}, {210, 220, 230}};

    printf("arrayOf2D-%p\n", arrayOf2D);
    printf("*arrayOf2D-%p\n", *arrayOf2D);
    printf("*(*arrayOf2D)-%d\n", *(*arrayOf2D));

    printf("\n**************************************************************\n");
    printf("(*arrayOf2D+1)-%p\n", (*arrayOf2D + 1));
    printf("*(*arrayOf2D+1)-%d\n", *(*arrayOf2D + 1));

    printf("\n**************************************************************\n");
    printf("(*arrayOf2D+2)-%p\n", (*arrayOf2D + 2));
    printf("*(*arrayOf2D+2)-%d\n", *(*arrayOf2D + 2));

    printf("\n**************************************************************\n");
    printf("arrayOf2D+1-%p\n", arrayOf2D + 1);

    printf("\n**************************************************************\n");
    printf("(*(arrayOf2D+1))-%p\n", (*(arrayOf2D + 1)));
    printf("*(*(arrayOf2D+1))-%d\n", *(*(arrayOf2D + 1)));

    printf("\n**************************************************************\n");
    printf("(*(arrayOf2D+1)+1)-%p\n", (*(arrayOf2D + 1) + 1));
    printf("*(*(arrayOf2D+1)+1)-%d\n", *(*(arrayOf2D + 1) + 1));

    printf("\n**************************************************************\n");
    printf("(*(arrayOf2D+1)+2)-%p\n", (*(arrayOf2D + 1) + 2));
    printf("*(*(arrayOf2D+1)+2)-%d\n", *(*(arrayOf2D + 1) + 2));

    return 0;
}
