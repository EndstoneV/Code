#include <bits/stdc++.h>
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
using namespace std;
int w[200005], v[200005], l[200005], r[200005];
ll ln[200005], lv[200005];
ll y, s, sum;
int n, m, mx = -1, mn = INT_MAX;
bool check(int x){
	y = 0, sum = 0;
	memset(ln, 0, sizeof(ln));
	memset(lv, 0, sizeof(lv));
	for(int i = 1; i <= n; i++){
		if(w[i] >= x){
			ln[i] = ln[i - 1] + 1;
			lv[i] = lv[i - 1] + v[i];
		}
		else{
			ln[i] = ln[i - 1];
			lv[i] = lv[i - 1];
		}
	}
	for(int i = 1; i <= m; i++){
		y+=(ln[r[i]] - ln[l[i] - 1]) * (lv[r[i]] - lv[l[i] - 1]);
	}
	sum = abs(y - s);
	if(y > s){
		return true;
	}
	else{
		return false;
	}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> m >> s;
	for(int i = 1; i <= n; i++){
		cin >> w[i] >> v[i];
		mx = max(mx, w[i]);
		mn = min(mn, w[i]);
	}
	for(int i = 1; i <= m; i++){
		cin >> l[i] >> r[i];
	}
	int lft = mn - 1, rt = mx + 2, mid;
	ll ans = 1145141919810;
	while(lft <= rt){
		mid = (lft + rt) / 2;
		if(check(mid)){
			lft = mid + 1;
		}
		else{
			rt = mid - 1;
		}
		if(sum < ans){
			ans = sum;
		}
	}
	cout << ans;
	return 0;
}