#include <bits/stdc++.h>
using namespace std;

int a[105][105];
int dp[105][105];
int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int q = 1; q <= c; q++) {
        for(int w = 1; w <= q; w++) {
            dp[w][q] =
                max(dp[w][q - 1], max(dp[w - 1][q - 1], dp[w + 1][q - 1]));
            dp[w][q] += a[w][q];
        }
    }
    printf("%d", dp[r][c]);
    return 0;
}