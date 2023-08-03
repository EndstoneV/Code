#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
int n, fa[maxn], lchild[maxn], rchild[maxn], d[maxn], vis[maxn];
int cal(int u, int s) {
    if(vis[u] || !u)
        return 0;
    vis[u]  = 1;
    int sum = d[u] * s;
    sum += cal(lchild[u], s + 1);
    sum += cal(rchild[u], s + 1);
    sum += cal(fa[u], s + 1);
    return sum;
}
int main() {
    int a, l, r;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a >> l >> r;
        d[i]      = a;
        lchild[i] = l;
        rchild[i] = r;
        fa[l]     = i;
        fa[r]     = i;
    }
    int ans = 1e9, t;
    for(int i = 1; i <= n; i++) {
        memset(vis, 0, sizeof(vis));
        t = cal(i, 0);
        if(ans > t)
            ans = t;
    }
    cout << ans << endl;
    return 0;
}