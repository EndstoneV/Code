#include <bits/stdc++.h>
using namespace std;
char a[105][105];
int n, side[105][105], vis[105], mx = INT_MIN + 1;
void h(int i, int j) {
    int leni = strlen(a[i] + 1), lenj = strlen(a[j] + 1);
    int l = 0, len = leni < lenj ? leni : lenj;
    while(l <= len) {
        l++;
        int k;
        for(k = 1; k <= l; k++) {  //
            if(a[i][leni - l + k] != a[j][k])
                break;
        }
        if(k == l + 1) {
            side[i][j] = lenj - l;
            break;
        }
    }
    if(i > j)
        h(j, i);
}
void dfs(int x, int len) {
    mx = max(len, mx);
    for(int i = 1; i <= n; i++) {
        if(side[x][i] > 0
           && vis[i] < 2) {
            vis[i]++;
            dfs(i, len + side[x][i]);
            vis[i]--;
        }
    }
}
int main() {
    cin >> n;
    for(int i = 1; i <= n + 1; i++) {
        cin >> a[i] + 1;
        for(int j = 1; j <= i; j++) {
            h(i, j);
        }
    }
    dfs(n + 1, 1);
    cout << mx;
    return 0;
}
