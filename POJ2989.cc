#include <bits/stdc++.h>
using namespace std;
int n, k, f[1003][1003], a[1003];
int dp() {
    memset(f,-0x3f,sizeof(f));
    f[0][0]=0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < k; j++) {
            f[i][j] = max(f[i - 1][j],
            f[i - 1][(j - a[i] % k + k) % k] + a[i]);
        }
    }
    return f[n][0];
}

int main() {
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", dp());
    return 0;
}
