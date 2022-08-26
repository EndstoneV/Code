#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int a[100003], dp[100003][110], mx, ans = 0x3f3f3f;
int main() {
    int n, c;
    scanf("%d%d", &n, &c);
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]), mx = max(mx, a[i]);
    for(int i = a[1]; i <= mx; i++)
        dp[1][i] = (i - a[1]) * (i - a[1]);
    for(int i = 2; i <= n; i++) {
        int x = a[i - 1];
        for(int j = a[i]; j <= mx; j++) {
            while(dp[i - 1][x] + abs(j - x) * c > dp[i - 1][x + 1] + abs(j - x - 1) * c && x < mx)
                x++;
            dp[i][j] = dp[i - 1][x] + abs(j - x) * c + (j - a[i]) * (j - a[i]);
        }
    }
    for(int i = a[n]; i <= mx; i++)
        ans = min(ans, dp[n][i]);
    printf("%d", ans);
    // system("pause");
    return 0;
}