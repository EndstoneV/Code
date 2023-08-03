#include <bits/stdc++.h>
long long dp[55][6], s = 0;
int main() {
    int n, m, i, j, k;
    scanf("%d%d", &n, &m);
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(i = 2; i <= n; i++)
        for(j = 0; j < m; j++)
            if(j)
                dp[i][j] = dp[i - 1][j - 1];
            else
                for(k = 0; k < m; k++)
                    dp[i][j] += dp[i - 1][k];
    for(i = 0; i < m; i++)
        s += dp[n][i];
    printf("%lld", s);
    return 0;
}
