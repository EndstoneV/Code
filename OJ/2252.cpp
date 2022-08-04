#include <bits/stdc++.h>
using namespace std;
int n, m, ans[1005][1005];
char s[1005];
bool vis[1005][1005];
int dx[5] = { 0, -1, 0, 1, 0 };
int dy[5] = { 0, 0, -1, 0, 1 };
struct node {
    int x, y;
};
queue<node> q;
void bfs() {
    while(!q.empty()) {
        node ss = q.front();
        q.pop();
        for(int i = 1; i <= 4; i++) {
            int xx = ss.x + dx[i];
            int yy = ss.y + dy[i];
            if(xx >= 1 && xx <= n && yy >= 1 && yy <= m) {
                ans[xx][yy] = min(ans[xx][yy], ans[ss.x][ss.y] + 1);
                if(!vis[xx][yy]) {
                    q.push({ xx, yy });
                    vis[xx][yy] = 1;
                }
            }
        }
    }
}
int main() {
    memset(ans, 0x3f, sizeof(ans));
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%s", s + 1);
        for(int j = 1; j <= m; j++) {
            vis[i][j] = s[j] - '0';
            if(vis[i][j]) {
                ans[i][j] = 0;
                q.push({ i, j });
            }
        }
    }
    bfs();
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}