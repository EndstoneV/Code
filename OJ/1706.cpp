#include<bits/stdc++.h>
using namespace std;
int a[105],b[1005],n;
void dfs(int t){//t位置 
    if(t == n+1){
        for(int i = 1; i <= n; i++)
            printf("%5d", a[i]);
        printf("\n");
        return ;
    }
    for(int i = 1; i <= n; i++){//i是数值 
        if(!b[i]){
            b[i] = 1;
            a[t] = i;
            dfs(t+1);
            b[i] = 0;
        }
    }
}
int main(){
    scanf("%d", &n);//n个数填在m个位置 
    dfs(1);
    return 0;
}
