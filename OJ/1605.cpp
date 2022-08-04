#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=n;i++)
using namespace std;
int a[6][6];
int b[6][6];
int T[6] = {-1, 0, 1, 0, -1};
int n, m, t, sx, sy, fx, fy, x, y, sum;
void dfs(int x, int y){//t位置 
    if(x == fx && y == fy){
		sum++;
        return;
    }
    for(int i = 1; i <= 4; i++){//i是数值 
    	int A = x + T[i - 1], B = y + T[i];
		if (A >= 1 && B >= 1 && A <= n && B <= m && !a[A][B] && !a[A][B]){
			a[A][B] = 1;
			dfs (A, B);
			a[A][B] = 0;
		}
    }
}
int main(){
	scanf("%d%d%d", &n, &m, &t);
	scanf("%d%d%d%d", &sx, &sy, &fx, &fy);
	a[sx][sy] = 1;
	for(int i = 1; i <= t; i++)
		scanf("%d%d", &x, &y), a[x][y] = 1;
    dfs(sx, sy);
    printf("%d", sum);
    return 0;
}
