#include <bits/stdc++.h>
using namespace std;
int x, n, s, ans, vis[100005];
char c;
struct Node {
    int p, v;
    bool operator<(const Node& A) const {
        return p < A.p;
    }
} a[100005];
main(int argc, char** argv) {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf(" %d %c", &a[i].p, &c);
        a[i].v = (c == 'W' ? 1 : -1);
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++) {
        s += a[i].v;
        if(s >= 0) {
            if(s % 2 == 0)
                ans = max(ans, a[i].p - a[1].p);
            else
                ans = max(ans, a[i].p - a[2].p);
        }
        else {  // s < 0
            if(!vis[-s])
                vis[-s] = a[i + 1].p;
            else
                ans = max(ans, a[i].p - vis[-s]);
        }
    }
    printf("%d\n", ans);
    return 0;
}