#include <bits/stdc++.h>
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
using namespace std;
int n, a[30005], dp[30005];
int len, ans;
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    dp[1] = a[1];
    len = 1;
    f(i, 2, n) {
        if(a[i] >= dp[len])
            dp[++len] = a[i];
        else {
            int pos = upper_bound(dp + 1, dp + len + 1, a[i]) - dp;
            dp[pos] = a[i];
        }
    }
    ans = len;
    len = 1;
    dp[1] = a[1];
    f(i, 2, n) {
        if(a[i] <= dp[len]) {
            dp[++len] = a[i];
        }
        else {
            int pos =
                upper_bound(dp + 1, dp + len + 1, a[i], greater<int>()) - dp;
            dp[pos] = a[i];
        }
    }
    printf("%d\n", n - max(ans, len));
    return 0;
}