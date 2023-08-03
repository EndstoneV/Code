#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int a[n + 1], q[n + 1];
    int mx = -INT_MAX, mn = 0;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        q[i] = q[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++) {
        mx = max(mx, q[i] - mn);
        mn = min(q[i], mn);
    }
    printf("%d", mx);
    return 0;
}