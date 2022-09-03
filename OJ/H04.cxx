#include <bits/stdc++.h>
#define ll long long
#define F(i, j, k) for(int i = j; i <= k; i++)
using namespace std;

int r, c, h[103][103], mn = 0x3f3f3f3f, ans = 1;
int dirx[4] = { 0, 0, -1, 1 }, diry[4] = { -1, 1, 0, 0 };
void dfs(int x, int y, int sum) {
    if(h[x][y] - mn + sum + 1 <= ans) return;
    if((h[x + 1][y] >= h[x][y] || x >= r) && (h[x - 1][y] >= h[x][y] || x < 2)
       && (h[x][y + 1] >= h[x][y] || y >= c)
       && (h[x][y - 1] >= h[x][y] || y < 2)) {
        ans = max(ans, sum);
        return;
    }
    for(int i = 0; i < 4; i++) {
        int curx = x + dirx[i], cury = y + diry[i];
        if(curx > 0 && cury > 0 && curx <= r && cury <= c
           && h[curx][cury] < h[x][y])
            dfs(curx, cury, sum + 1);
    }
}
int main(int argc, char** argv) {
    scanf("%d%d", &r, &c);
    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= c; j++)
            scanf("%d", &h[i][j]), mn = min(mn, h[i][j]);
    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= c; j++)
            dfs(i, j, 1);
    printf("%d", ans);
    return 0;
}
