#include <bits/stdc++.h>
using namespace std;
int n, u, v, x, y, dep, a[110], wid, dis, t[110];
struct Node {
    int fa, lch, rch;
} tree[110];
int getwid();
void dfs(int now, int pos) {
    dep = max(dep, pos);
    a[pos]++;
    if(tree[now].lch)
        dfs(tree[now].lch, pos + 1);
    if(tree[now].rch)
        dfs(tree[now].rch, pos + 1);
}
int main() {
    scanf("%d", &n);
    for(int i = 1; i < n; i++) {
        scanf("%d%d", &u, &v);
        tree[v].fa = u;
        if(!tree[u].lch)
            tree[u].lch = v;
        else
            tree[u].rch = v;
    }
    dfs(1, 1);
    wid = getwid();
    scanf("%d%d", &x, &y);
    int k = 0;
    while(x != 1) {
        t[x] = k++;
        x    = tree[x].fa;
    }
    t[1] = k;
    while(t[y] == -1) {
        y = tree[y].fa;
        dis++;  //向叶
    }
    dis += t[y] * 2;  //向根
    printf("%d\n%d\n%d", dep, wid, dis);
    return 0;
}
int getwid() {
    int w = -1;
    for(int i = 1; i <= dep; i++) {
        w = max(w, a[i]);
    }
    return w;
}