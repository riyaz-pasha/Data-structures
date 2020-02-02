#include <stdio.h>
struct Point
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    struct Point point1 = {11, 22};
    printf("point1.x-%d\n", point1.x);
    printf("point1.y-%d\n", point1.y);

    printf("\n**************************************************************\n");

    struct Point *pointerVariableToPoint1 = &point1;

    printf("point1-%p\n", &point1);
    printf("pointerVariableToPoint1-%p\n\n", pointerVariableToPoint1);
    printf("(*pointerVariableToPoint1).x-%d\n", (*pointerVariableToPoint1).x);
    printf("(*pointerVariableToPoint1).y-%d\n\n", (*pointerVariableToPoint1).y);

    printf("pointerVariableToPoint1->x-%d\n", pointerVariableToPoint1->x);
    printf("pointerVariableToPoint1->y-%d\n", pointerVariableToPoint1->y);

    return 0;
}
