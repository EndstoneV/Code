#include <bits/stdc++.h>
using namespace std;
int N, B, h[10005], f[1000005], sum;
int main() {
    freopen("bridge.in", "r", stdin);
    freopen("bridge.out", "w", stdout);
    scanf("%d%d", &N, &B);
    for(int i = 1; i <= N; i++) {
        scanf("%d", &h[i]);
        sum += h[i];
    }
    int k = sum - B;
    for(int i = 1; i <= N; i++) {
        for(int j = k; j >= h[i]; j--) {
            f[j] = max(f[j], f[j - h[i]] + h[i]);
        }
    }
    printf("%d", k - f[k]);
    return 0;
}