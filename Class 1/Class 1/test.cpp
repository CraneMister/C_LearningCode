#include <stdio.h>

int main()
{
    float price = 0;

    printf("请输入金额（元）：");
    scanf_s("%f", &price);

    float change = 100 - price;

    printf("找您%f元。\n", change);

    return 0;
}