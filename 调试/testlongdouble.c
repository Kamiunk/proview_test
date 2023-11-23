#include <stdio.h>
int main()
{
    long double i, j, k=0.0, b=1.0, a, n;
    scanf_s("%lf", &a);
    for (int i = a; i > 0; i--) 
    {
        for (int j = i; j > 0; j--) 
        {

            if (j >= 1) 
            {
                b *= j ;
            }
        }
        k += b;
        b = 1;
    }
    printf("%lf", k);
    return 0;
}