#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void demoSushu();

int main()
{
    demoSushu();
    return 0;
}

// ��������
void demoSushu()
{

    int x = 0;
    int count = 0;
    int countNum = 0;
    printf("������һ������0������x,����0��x֮ǰ�ж�������.\n");
    scanf("%d", &x);

    for (int y = 2; y <= x; y++)
    {
        int stuts = 1;
        for (int i = 2; i < y; i++)
        {
            if (y % i == 0)
            {
                stuts = 0;
                break;
            }
        }
        switch (stuts)
        {
        case 1:
            printf("%d ", y);
            count++;
            countNum += y;
            break;
        }
    }
    printf("\n������%d��\n", count);
    printf("%d��������֮����%d\n.", x, countNum);
    printf("��������Լ���?...");
    fflush(stdin);
    getchar();
}

// �׳� forѭ�� whileѭ��
void demoFor()
{

    int num = 4;
    int x = 1;
    while (num > 0)
    {
        x *= num;
        num--;
    }
    printf("while:%d\n", x);

    num = 6;
    x = 1;
    for (int i = num; i > 0; i--)
    {
        x *= num;
        num--;
    }
    printf("for:%d\n", x);
    system("pause");
}

// switch case
void demoSwitch()
{
    int num;
    scanf("%d", &num);

    switch (num)
    {

    case 1:
        printf("num=%d\n", num);
        break;

    case 2:
        printf("num=%d\n", num);
        break;

    default:
        printf("null");
        break;
    }

    system("pause");
}

// ����ʱ��;����ķ�����������ֹʱ��?
void demoTime()
{

    int starTime = 0;
    int passMinute = 0;

    printf("������ʱ��,����11:20������Ϊ1120 \n");
    scanf("%d", &starTime);
    printf("��������ʧ�ķ�����:\n");
    scanf("%d", &passMinute);

    int hour = 0;
    int minute = 0;
    hour = starTime / 100;
    minute = starTime % 100;

    hour = hour + (minute + passMinute) / 60;
    minute = (minute + passMinute) % 60;

    printf("��ֹʱ����:%d%d\n", hour, minute);
    system("pause");
}

// ���׻���Ӣ��Ӣ��
void testTwo()
{
    int cm = 0;
    printf("������������:\n");
    scanf("%d", &cm);

    int a = cm * 0.0328;
    float b = fmod(cm * 0.0328, 1);
    int c = b * 12;

    printf("%d���׵���: %dӢ��%dӢ��.\n", cm, a, c);
    system("pause");
}

// ������������,������������,�������?,��,��,��
void calculation()
{

    int x = 0;
    int y = 0;
    printf("��������������:\n");
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    system("pause");
}

// ���ϸ�ֵ�͵����ݼ�
void testOne()
{
    // ����+=,*=,�����ĸ��ϸ�ֵ,Ҫ�ȼ����ұߵ�
    //  total += (sum+100)/2
    //..total = total+(sum+100)/2
    //  total *= sum+12
    //..total = total * (sum+12)

    // �����ݼ������?:++,--
    //  int a = 10;
    //  a++;  ��������11,�˱���ʽ��ֵ��10
    //++a;  ��������11,�˱���ʽ��ֵ��11
    //  a++����������?,++a�������ǰ�?
}

// ��������
void exchangeVariable()
{

    int a = 1;
    int b = 2;
    int t = 0;

    t = a;
    a = b;
    b = t;

    printf("a=%d,b=%d.\n", a, b);
    system("pause");
}

// ������������,����ƽ��ֵ
void countAverage()
{
    int x = 0;
    int y = 0;
    printf("������������:\n");
    scanf("%d %d", &x, &y);

    printf("%d��%d��ƽ��ֵ��%d\n", x, y, (x + y) / 2);
    system("pause");
}

// ����ʱ���?
void countTime()
{

    int hour, hour1;
    int minute, minute1;

    printf("����ʱ���\n");
    printf("������Сʱ�ͷ���:\n");
    scanf("%d %d", &hour, &minute);

    printf("������Сʱ�ͷ���:\n");
    scanf("%d %d", &hour1, &minute1);

    int t1 = hour * 60 + minute;
    int t2 = hour1 * 60 + minute1;

    int t = t1 - t2;

    printf("ʱ�����?:%dСʱ%d��.\n", t / 60, t % 60);

    system("pause");
}

void countNum()
{

    double price = 0;
    double price1 = 0;

    printf("�������?:");
    scanf("%lf", &price);
    printf("���뱻����:");
    scanf("%lf", &price1);

    printf("����?%lf\n", price - price1);
    system("pause");
}