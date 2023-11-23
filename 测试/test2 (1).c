#include<stdio.h>

void zys(int a)
{
    int b = 0;
    for (int i = 2; a != 1; i++)
    {
        while (1)
        {

            if (a % i == 0)
            {
                a = a / i;
                b++;
            }
            else if (a % i != 0)
            {
                power(i, b);
                break;
            }
        }
        b = 0;
        if (a != 1)printf("*");
    }
    printf("=%d", a);
}
int main()
{
    int x;
    scanf_s("%d", &x);
    zys(x);
}