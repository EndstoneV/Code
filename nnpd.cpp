#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
int a[30005];
int sum[30005];
int main() {
    int n;
    scanf("%d", &n);
    f(i, 1, n) scanf("%d", &a[i]);
    f(i, 1, n) if(a[i] == 2) a[i] = 0;
    f(i, 1, n) sum[i] = sum[i - 1] + a[i];
    int ans = n;
    f(i, 0, n) ans = min(i - sum[i] + sum[n] - sum[i], ans);
    printf("%d", ans);
    return 0;
}