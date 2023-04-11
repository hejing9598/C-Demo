#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void demo();

int main()
{
    // printf("Hello World\n");
    // system("pause");

    demo();
    return 0;
}

void demo()
{
    POINT gcPosition = {0}, csPosition = {0};
    GetCursorPos(&gcPosition);
    printf("X:%d,Y:%d\n", gcPosition.x, gcPosition.y);
    printf("x:%d,Y:%d\n", csPosition.x, csPosition.y);
    system("pause");
}