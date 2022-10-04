#include <bits/stdc++.h>
#define ll long long
#define ld double
#define np next_permutation
using namespace std;

int n, T, x, m;
map<int, int> ma;
bool check() {
    ma.clear();
    for(int i = 1; i <= n; i++)
        scanf("%d", &x), ma[x]++;
    while(ma.size()) {
        int bg = ma.begin()->first;
        for(int i = bg; i <= bg + m - 1; i++)
            if(ma.count(i)) {
                ma[i] = ma[i] - 1;
                if(ma[i] == 0)
                    ma.erase(i);
            }
            else
                return 0;
    }
    return 1;
}

signed main() {
    freopen("group.in", "r", stdin);
    freopen("group.out", "w", stdout);
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d", &n, &m);
        puts(check() ? "true\n" : "false\n");
    }
    return 0;
}
