#include <iostream>
using namespace std;

int main() {
    int a[100] = { 0 };//�洢��n�׵Ŀ��ܴ���
    a[0] = 1;
    int n; //̨����
    int k;//ÿ���ߵ������
    scanf_s("%d %d",&n,&k)
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                a[i] = a[i] + a[i - j];
                a[i] = a[i] % 100003;
            }

        }
    }
    cout << a[n] << endl;
    return 0;
}