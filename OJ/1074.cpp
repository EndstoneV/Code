#include<bits/stdc++.h>
using namespace std;
struct orz{
    int line, num;
};
orz n[10];
int ans = 0, mwuml[10][2][10], a[10][10], b[10][10], c[10][10];
bool csnfsr(orz a, orz b){
    return a.num < b.num;
}
int cfl(int x, int y){
    return (x + 2) / 3 + 3 * ((y + 2) / 3 - 1);
}
int css(){
    int ScoreNow = 0;
    for(int i = 1; i <= 9; i++)
    for(int j = 1; j <= 9; j++)
        ScoreNow += a[i][j] * c[i][j];
    ans < ScoreNow ? ans = ScoreNow : ScoreNow = ans;
}
void dfs(int x, int y){
    int tx = n[x].line;
    if(x == 10){
        css();
        return;
    }
    if(a[tx][y] != 0) dfs(x + y / 9, y % 9 + 1);
    else for(int k = 1; k <= 9; k++){
        if(!b[cfl(tx, y)][k] && !mwuml[tx][0][k] && !mwuml[y][1][k]){
            mwuml[tx][0][k] = 1;
            mwuml[y][1][k] = 1;
            b[cfl(tx, y)][k] = 1;
            a[tx][y] = k;
            dfs(x + y / 9, y % 9 + 1);
            mwuml[tx][0][k] = 0;
            mwuml[y][1][k] = 0;
            b[cfl(tx, y)][k] = 0;
            a[tx][y] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 1; i <= 9; i++){
        int cnt = 0;
        for(int j = 1; j <= 9; j++){
            cin >> a[i][j];
            int NowNumber = a[i][j];
            if(NowNumber){
                mwuml[i][0][NowNumber] = 1;
                mwuml[j][1][NowNumber] = 1;
                b[cfl(i,j)][NowNumber] = 1;
            }
            else cnt++;
        }
        n[i].line = i;
        n[i].num = cnt;
    }
    sort(n + 1, n + 10, csnfsr);
    for(int i = 0; i <= 4; i++)
    for(int j = 5 - i; j <= 5 + i; j++)
    for(int k = 5 - i; k <= 5 + i; k++) 
        if(c[j][k] == 0)
            c[j][k] = 10 - i;	
    dfs(1, 1);
    if(ans == 0) ans = -1;
    cout << ans << endl;
}

