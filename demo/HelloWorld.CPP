#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int add(int a, int b)
{

    return a + b;
}

// 主函数
int main()
{
    // 设置中文
    SetConsoleOutputCP(65001);
    printf("Hello World!\n");
    printf("add:%d\n", add(1, 2));

    // 等待：任意键继续
    system("pause");

    // 返回值
    return 0;
}
