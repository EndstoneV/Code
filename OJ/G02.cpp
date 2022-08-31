#include <bits/stdc++.h>
using namespace std;
char s1[1005], s2[1005];
int n, l1, l2, dp[1003][1003];
int main() {
    scanf("%d", &n);
    while(n--) {
        memset(s1, 0, sizeof(s1));
        memset(s2, 0, sizeof(s2));
        memset(dp, 0, sizeof(dp));
        l1 = l2 = 0;
        scanf("%s%s", s1, s2);
        l1 = strlen(s1), l2 = strlen(s2);
        for(int i = 0; i < l1; i++)
            dp[i][0] = i;
        for(int i = 0; i < l2; i++)
            dp[0][i] = i;
        for(int i = 1; i <= l1; i++) {
            for(int j = 1; j <= l2; j++) {
                if(s1[i - 1] == s2[j - 1])        // If the same:
                    dp[i][j] = dp[i - 1][j - 1];  // If different, then choose the minimalest way.
                else
                    dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
            }
        }
        printf("%d\n", dp[l1][l2]);
    }
    return 0;
}