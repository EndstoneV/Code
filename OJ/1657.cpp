#include<bits/stdc++.h>
using namespace std;
int a[21][3], /*n, m,*/ cnt, x;
bool b[1005];
void dfs(int t){//t位置 
//    if(t == m + 1){
//        for(int i = 1; i <= m; i++)
//            printf("%d ", a[i]);
//        printf("\n");
//        return ;
//    }
	if(t > x) cnt++;
    else{for(int i = 1; i <= 2; i++)/*i是数值*/ if(!b[a[t][i]]) b[a[t][i]] = 1, dfs(t + 1), b[a[t][i]] = 0;}
}
int main(){
//    scanf("%d%d", &n, &m);//n个数填在m个位置 
    scanf("%d", &x); 
    if(!x){putchar('0'); return 0;}
	for(int i = 1; i <= x; i++) scanf("%d%d", &a[i][1], &a[i][2]);	
    dfs(1),printf("%d", cnt);
    return 0;
}
