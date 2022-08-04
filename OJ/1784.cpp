/*
	Name: P1784
	Copyright: diamond_block's blog--DFS template
	Date: 07/02/22 12:19
*/
#include<bits/stdc++.h>
using namespace std;

int a[9][9];
int hang[10][10], lie[10][10], fangge[10][10];
int ni[100], nj[100], cnt;
int box[9][9] = {1,1,1,2,2,2,3,3,3,
				 1,1,1,2,2,2,3,3,3,
				 1,1,1,2,2,2,3,3,3,
				 4,4,4,5,5,5,6,6,6,
				 4,4,4,5,5,5,6,6,6,
				 4,4,4,5,5,5,6,6,6,
				 7,7,7,8,8,8,9,9,9,
				 7,7,7,8,8,8,9,9,9,
				 7,7,7,8,8,8,9,9,9};
/*if(box[hang[i][j]][lie[i][j]]==box[hang[a][b]][lie[a][b]])*/
void sign(bool q, int a, int b){
	hang[ni[a]][b] = q;
	lie[nj[a]][b] = q;
	fangge[box[ni[a]][nj[a]]][b] = q;
} 
void dfs(int t){//t位置 
	if(t == cnt + 1){
		for(int i = 0; i < 9; i++){
			for(int j = 0; j < 9;j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
		return ;
	}
	int tt = t;
	for(int i = 1; i <= 9; i++){//i是数值 
		if(hang[ni[tt]][i] ||
		   lie[nj[tt]][i] ||
		   fangge[box[ni[tt]][nj[tt]]][i])
			continue;
		else{
			a[ni[tt]][nj[tt]] = i;
			sign(1, tt, i);
			dfs(t + 1);
			a[ni[tt]][nj[tt]] = 0;
			sign(0, tt, i);
		}
	}
}
int main(){
//	scanf("%d%d", &n, &m);//n个数填在m个位置 
//	freopen("1784.in", "r", stdin);
//	freopen("1784.out", "w", stdout);
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
			scanf("%d", &a[i][j]);
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			if(!a[i][j])//to FILL
				cnt++, ni[cnt] = i, nj[cnt] = j;
			else{
				hang[i][a[i][j]] = 1;
				lie[j][a[i][j]] = 1;
				fangge[box[i][j]][a[i][j]] = 1;
			}
		}
	}
	dfs(1);
	return 0;
} 

