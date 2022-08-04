#include <bits/stdc++.h>
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
using namespace std;

int m[305][305];
int vis[305][305];
int tim[305][305];
int dirx[5] = { 0, 0, 0, 1, -1 };
int diry[5] = { 0, 1, -1, 0, 0 };
bool flag   = 0;
void bfs(int x, int y) {
    queue<int> q[2];
    vis[x][y] = 1;
    q[0].push(x);
    q[1].push(y);
    while(!q[0].empty()) {
        int xx = q[0].front();
        q[0].pop();
        int yy = q[1].front();
        q[1].pop();
        int s = tim[xx][yy] + 1;
        if(m[xx][yy] == 9999) {
            cout << s - 1;
            flag = 1;
            exit(0);
        }
        for(int k = 1; k < 5; k++) {
            int xx1 = xx;
            int yy1 = yy;
            if(xx1 + dirx[k] >= 0 && yy1 + diry[k] >= 0
               && vis[xx1 + dirx[k]][yy1 + diry[k]] == 0
               && s < m[xx1 + dirx[k]][yy1 + diry[k]]) {
                tim[xx1 + dirx[k]][yy1 + diry[k]] = s;
                vis[xx1 + dirx[k]][yy1 + diry[k]] = 1;
                q[0].push(xx1 + dirx[k]);
                q[1].push(yy1 + diry[k]);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < 305; i++) {
        for(int j = 0; j < 305; j++) {
            m[i][j] = 9999;
        }
    }
    for(int i = 1; i <= n; i++) {
        int sx, sy, st;
        cin >> sx >> sy >> st;
        for(int j = 0; j < 5; j++)
            if(sx + dirx[j] >= 0 && sy + diry[j] >= 0
               && st < m[sx + dirx[j]][sy + diry[j]])
                m[sx + dirx[j]][sy + diry[j]] = st;
    }
    bfs(0, 0);
    if(!flag)
        cout << -1;
    return 0;
}