#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int f[1005][1005];
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            scanf("%d", &a[i][j]);

    for(int i = n; i >= 1; i--)
        for(int j = 1; j <= i; j++)
            f[i][j] = max((f[i + 1][j] + a[i][j]) % 1000,
                          (f[i + 1][j + 1] + a[i][j]) % 1000);

    printf("%d", f[1][1]);
    return 0;
}