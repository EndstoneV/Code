/*
	Name: P1644
	Copyright: N
	Author: diamond_block 
	Date: 29/01/22 21:17
	Description: N
*/

#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=n;i++)
using namespace std;
int n, m, cnt, t, tt;
void dfs(int t, int tt){
    if (t < 0 || t > n || tt > m) return;//daole
    if (t == n && tt == m) cnt++;
//        cout << cnt << endl;
	else{
		/*
		t   tt
		+1 	+2
		+2  +1
		-2 	+1
		-1  +2
		*/
        dfs(t + 1, tt + 2);
        dfs(t + 2, tt + 1);
        dfs(t - 2, tt + 1);
        dfs(t - 1, tt + 2);
    }
}
int main()
{
	scanf("%d%d", &n, &m);
    dfs(0, 0);
    printf("%d", cnt);
    return 0;
}

