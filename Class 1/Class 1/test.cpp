#include <stdio.h>

int main()
{
    float price = 0;

    printf("�������Ԫ����");
    scanf_s("%f", &price);

    float change = 100 - price;

    printf("����%0.2fԪ��\n", change);

    return 0;
}