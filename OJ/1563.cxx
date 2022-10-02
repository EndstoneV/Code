#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
struct person {
    char nam[12];
    int nw;
};
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    person a[n + 1];
    int dir;
    int dis;
    for(int i = 1; i <= n; i++) {
        scanf("%d %s", &a[i].nw, a[i].nam);
    }
    int j = 1;
    for(int i = 1; i <= m; i++) {
        scanf("%d%d", &dir, &dis);
        a[j].nw == dir ? j -= dis : j += dis;
        if(j <= 0)
            j += n;
        if(j > n)
            j -= n;
    }
    puts(a[j].nam);
    return 0;
}