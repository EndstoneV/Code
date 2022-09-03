#include <bits/stdc++.h>
#pragma GCC optimize(3)
#pragma GCC target("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
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
