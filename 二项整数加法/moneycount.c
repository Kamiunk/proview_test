#include<stdio.h>
int main()
{
    int price1 =0;
    printf("�������");
    scanf_s("%d", &price1);
    int price2 = 0;
    printf("�������");
    scanf_s("%d", &price2);
    int change = price2 + price1;
    printf("����%dԪ\n", change);
    return 0;

}