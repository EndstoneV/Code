#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
ll n, a, b, c[600006];
int check(int mid){
	int cnt(0);
	f(i, 1, n){
		if(c[i] > mid * a){
			if((c[i] - mid * a) % b == 0)
                cnt += (c[i] - mid * a) / b;
			else cnt += ((c[i] - mid * a) / b + 1);
		}
	}
	return cnt;
}
int main(){
    cin.tie(0);
    cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> a >> b;
	f(i, 1, n)
        cin >> c[i];
	int l = 0, r = 1145141919;
	while(l <= r){
		int mid = (l + r + 1) / 2;
		if(check(mid) <= mid)
            r = mid - 1;
		else
            l = mid + 1;
	}
	cout << l;
	return 0;
} 
