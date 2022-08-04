/*
	Name: 1451
	Copyright: N 
	Author: D.B.
	Date: 30/01/22 21:24
	Description: N
*/
#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i = 1; i <= n; i++)
using namespace std;

//char a[2000][2000];
int b[2000][2000];
int m,n,cnt;
int dx[5] = {0, 0, 0, -1, 1};
int dy[5] = {0, 1, -1, 0, 0};
void dfs(int x, int y){
	if(x < 1 || x > m || y < 1 || y > n || !b[x][y]) return;//chao||0
	b[x][y] = 0;
	for(int i = 1; i <= 4; i++){
		dfs(x + dx[i], y + dy[i]);
	}
}
int main(){
	cin.tie(0);
    cin.sync_with_stdio(false);
	scanf("%d%d", &m, &n);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
//			a[i][j] = getchar();
//			scanf("%c", &a[i][j]); 
//			cin >> a[i][j];
//			b[i][j] = a[i][j] - '0';
			scanf("%1d", &b[i][j]);
		}
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(b[i][j]){
				dfs(i,j);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
} 
