#include <stdio.h>
int main() {
    char s[500000] = { 0 };
    int hua = 0, sha = 0, i, j, h = 0, a = 0;
    scanf_s("%s\n", s);
    for (int i = 0; i < 499999; i++) {
        if (s[i] == 'W')
        {
            hua++;
        }
        else if (s[i] == 'L')
        {
            sha++;
        }

        else if (s[i] == 'E')
        {
            break;
        }

        ;
        if (hua >= 11 && sha <= 11 && hua >= sha + 2 || hua == sha + 2 && hua > 11 && sha > 11)
        {
            printf("%d:%d\n", hua, sha);
            hua = 0;
            sha = 0;
        }
        if (sha >= 11 && hua <= 11 && sha >= hua + 2 || sha == hua + 2 && sha > 11 && hua > 11)
        {
            printf("%d:%d\n", hua, sha);
            sha = 0;
            hua = 0;
        }
    }
    printf("%d:%d\n", hua, sha);
    printf("\n");
    for (int j = 0; j < 499999; j++) {
        if (s[j] == 'W')
        {
            h++;
        }
        else if (s[j] == 'L')
        {
            a++;
        }

        else if (s[j] == 'E')
        {
            break;
        }
        ;
        if (h >= 21 && a <= 21 && h >= a + 2 || h == a + 2 && h > 21 && a > 21)
        {
            printf("%d:%d\n", h, a);
            h = 0;
            a = 0;
        }
        if (a >= 21 && h <= 21 && a >= h + 2 || a == h + 2 && a > 21 && h > 21)
        {
            printf("%d:%d\n", h, a);
            a = 0;
            h = 0;
        }
    }
    printf("%d:%d\n", h, a);
    return 0;
}