#include<bits/stdc++.h>
using namespace std;
int n, x, y, ans = 7249876, sum;
int a[233];
bool b[233];
void dfs(int t){
    if(t == y) ans = min(ans, sum);
    if(sum <= ans){
	    b[t] = true;
	    if(t + a[t] <= n && !b[t + a[t]]) sum++, dfs(t + a[t]), sum--;
	    if(t - a[t] >= 1 && !b[t - a[t]]) sum++, dfs(t - a[t]), sum--;
	    b[t] = false;	
	}
}
int main()
{
    scanf("%d%d%d", &n, &x, &y);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    b[x] = 1;
    dfs(x);//DFS 1DINGYAOJQINGCHU
    if(ans==7249876){
    	printf("-1");
    	return 0;
	}
	printf("%d",ans);
    return 0;
}

