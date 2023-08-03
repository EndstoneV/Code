#include <bits/stdc++.h>
using namespace std;
int a[105], b[1005], n, m;
void dfs(int t) {
    if(t == m + 1) {
        for(int i = 1; i <= m; i++)
            printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(int i = 1; i <= n; i++) {
        if(!b[i]) {
            b[i] = 1;
            a[t] = i;
            dfs(t + 1);
            b[i] = 0;
        }
    }
}
int main() {
    scanf("%d%d", &n, &m);
    dfs(1);
    return 0;
}