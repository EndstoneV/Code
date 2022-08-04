#include<bits/stdc++.h>
#define ll long long
#define ld double
#define F(i, j, k) for(int i = j; i <= k; i++)
using namespace std;

int n, b[1005], t;
bool ok;
struct p{
	double x, y, z;
} a[1003]; 
double h, r;
////
//借鉴这一部分.. 
bool e(int i, int j){
    double dis = (a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y) + (a[i].z - a[j].z) * (a[i].z - a[j].z);
    return dis <= 4 * r * r;
}
////
void dfs(int k){
    if(ok)return;
    if(a[k].z + r >= h){
        ok = 1;
        return;
    }
    b[k] = 1;
    for(int i = 1; i <= n; i++)
    if(!b[i] && e(i, k))
    dfs(i);
}
int main(){
	scanf("%d", &t);
    F(i, 1, t){
    	memset(b, 0, sizeof(b));
        ok = 0;
        scanf("%d%lf%lf", &n, &h, &r);
        F(j, 1, n)
        	scanf("%lf%lf%lf", &a[j].x, &a[j].y, &a[j].z);
        F(j, 1, n)
	        if(a[j].z - r <= 0)
	        	dfs(j);
        if(ok)
        	printf("Yes\n");
        else
			printf("No\n");
    }
} 

