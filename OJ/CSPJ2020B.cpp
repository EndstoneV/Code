#include <bits/stdc++.h>
using namespace std;
int a[100004];
int main() {
    freopen("live.in", "r", stdin);
    freopen("live.out", "w", stdout);
    int n, w;
    int flag;
    scanf("%d%d", &n, &w);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++) {
        sort(a + 1, a + i + 1, greater<int>());
        flag = floor((w / 100.0) * i);
        flag = max(1, flag);
        printf("%d ", a[flag]);
        flag = 0;
    }
    return 0;
}