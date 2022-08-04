#include<bits/stdc++.h>
using namespace std;
int n, t;
int a[1005], oper[1005], cnt, c, m;
int main()
{
	//sr 
    scanf("%d", &n);
    for(int i = 1; i <= n; ++ i){
    	scanf("%d", &a[i]);
		oper[i] = a[i];
	}
	//px
    sort(oper+1, oper+n+1);
    //m
    for(int i = 1; i <= n - 1; ++ i){
        for(int j = i + 1; j <= n; ++ j){
    if(/*全不等,计*/a[i] != oper[i] && a[j] != oper[j] && a[i] == oper[j] && a[j] == oper[i]){
                ++ cnt;
                swap(a[i], a[j]);
                break;
            }
        }
    }
    
    for(int i = 1; i <= n; ++ i)
		if(oper[i] == 1)
			++ c;
    for(int i = 1; i <= c; ++ i)
		if(a[i] != 1)
			++ m;
    for(int i = 1; i <= m; ++ i)
		cnt += 2;
	//sc
    printf("%d", cnt);
    return 0;
}
