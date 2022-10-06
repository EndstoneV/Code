#include <bits/stdc++.h>
using namespace std;
int n, m, a[100003];
int main() {
    scanf("%d%d", &n, &m);
    // int a[n + 3];
    int ans = n;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 2; i <= n; i++) {
        if(a[i] + a[i - 1] <= m)
            a[i] += a[i - 1], ans--;
    }
    printf("%d", ans);
    return 0;
}