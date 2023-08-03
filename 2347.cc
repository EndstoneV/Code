#include <bits/stdc++.h>
using namespace std;
int cnt[1005];
int main() {
    int a1, a2, a3, a4, a5, a6, ans = 0;
    scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6);
    for(int i = 0; i <= a1; i++) {
        for(int j = 0; j <= a2; j++) {
            for(int k = 0; k <= a3; k++) {
                for(int l = 0; l <= a4; l++) {
                    for(int m = 0; m <= a5; m++) {
                        for(int n = 0; n <= a6; n++) {
                            cnt[i + 2 * j + 3 * k + 5 * l + 10 * m + 20 * n]++;
                        }
                    }
                }
            }
        }
    }
    for(int x = 1; x <= 1000; x++)
        if(cnt[x])
            ans ++;
    printf("Total=%d", ans);
    return 0;
}