#include <iostream>
using namespace std;

int main() {
    int a[100] = { 0 };//存储第n阶的可能次数
    a[0] = 1;
    int n; //台阶数
    int k;//每次走的最大步数
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