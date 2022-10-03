#include <bits/stdc++.h>
using namespace std;
int a[604];
int main() {
    freopen("live.in", "r", stdin);
    freopen("live.out", "w", stdout);
    int n, w, tmp, tot, j;
    int flag;
    scanf("%d%d", &n, &w);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &tmp);
        a[tmp]++;
        flag = i * w / 100;
        flag = max(1, flag);
        tot  = 0;
        for(j = 600; j >= 0; j--) {
            tot += a[j];
            if(tot >= flag) break;
        }
        printf("%d ", j);
    }
    return 0;
}