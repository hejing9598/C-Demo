#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int price, change;
    printf("请输入价格\n");
    scanf("%d", &price);
    printf("价格为%d\n", 100 - price);

    // printf("你好Hello World\n");
    system("pause");

    return 0;
}