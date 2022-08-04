#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int n, k;
bool vis[200005];
struct cow {
    int pos, sj;
};
queue<cow> q;

void bfs() {
    q.push(cow{ n, 0 });
    vis[n] = 1;
    while(!q.empty()) {
        cow t = q.front();
        int p = t.pos;
        if(t.pos == k) {
            cout << t.sj;
            return;
        }
        q.pop();
        int pp = p + 1;
        if(vis[pp] == 0 && pp >= 0 && pp <= 100000) {
            vis[pp] = true;
            q.push(cow{ pp, t.sj + 1 });
        }
        pp = p - 1;
        if(vis[pp] == 0 && pp >= 0 && pp <= 100000) {
            vis[pp] = true;
            q.push(cow{ pp, t.sj + 1 });
        }
        pp = 2 * p;
        if(vis[pp] == 0 && pp >= 0 && pp <= 100000) {
            vis[pp] = true;
            q.push(cow{ pp, t.sj + 1 });
        }
    }
}

int main() {
    cin >> n >> k;
    bfs();
    return 0;
}