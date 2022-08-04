#include <bits/stdc++.h>
using namespace std;
int n, k, r, fx[4][2] = { { 0, 1 }, { 0, -1 }, { -1, 0 }, { 1, 0 } }, num, ans;
bool cow[103][103], tag[103][103], flag[103][103][4];
struct node {
    int x, y;
} e[203];
struct tmptmptmp {
    int x, y, xx, yy;
} tmp;
void bfs(int pox, int poy) {
    num           = 0;
    tag[pox][poy] = 1;
    queue<node> q;
    q.push((node){ pox, poy });
    while(!q.empty()) {
        int tx = q.front().x, ty = q.front().y;
        if(cow[tx][ty])
            + +num;
        for(int i = 0; i < 4; i++) {
            int nowx = tx + fx[i][0], nowy = ty + fx[i][1];
            if(nowx >= 1 && nowx <= n && nowy >= 1 && nowy <= n
               && !flag[tx][ty][i] && !tag[nowx][nowy])
                q.push({ nowx, nowy }), tag[nowx][nowy] = 1;
        }
        q.pop();
    }
}
int main() {
    scanf("%d%d%d", &n, &k, &r);
    for(int i = 1; i <= r; i++) {
        scanf("%d%d%d%d", &tmp.x, &tmp.y, &tmp.xx, &tmp.yy);
        if(tmp.x == tmp.xx) {
            if(tmp.y < tmp.yy)
                swap(tmp.y, tmp.yy);
            flag[tmp.x][tmp.y][1] = flag[tmp.xx][tmp.yy][0] = 1;
        }
        else {
            if(tmp.x > tmp.xx)
                swap(tmp.x, tmp.xx);
            flag[tmp.x][tmp.y][3] = flag[tmp.xx][tmp.yy][2] = 1;
        }
    }
    for(int i = 1; i <= k; i++)
        scanf("%d%d", &e[i].x, &e[i].y), cow[e[i].x][e[i].y] = 1;
    for(int i = 1; i <= k; i++) {
        memset(tag, 0, sizeof(tag));
        bfs(e[i].x, e[i].y);
        ans += k - num;
    }
    printf("%d", ans / 2);
}