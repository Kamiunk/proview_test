#include<stdio.h>
int main()
{
    int price1 =0;
    printf("请输入金额：");
    scanf_s("%d", &price1);
    int price2 = 0;
    printf("请输入金额：");
    scanf_s("%d", &price2);
    int change = price2 + price1;
    printf("找你%d元\n", change);
    return 0;

}