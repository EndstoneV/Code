#include<bits/stdc++.h>
using namespace std;
int m, k, a[505], l, r, sum;
int b[505], c[505];
bool check(int x, int t = 1) {
	for(int i = 1, num = 0; i <= m; i++) {
		if(a[i] > x) return 0;
		if(t > k) return 0;
		if(a[i] + num <= x) num += a[i];
		else num = a[i], t++;
	}
	return t <= k;
}

int main(){
	cin >> m >> k;
	if(m == 0){
		cout << "0";
		return 0;
	}
	for(int i = 1; i <= m; i++){
		cin >> a[i];
		r += a[i];
	}
	while(l <= r){
		int mid = (l + r) / 2;
		if(check(mid)) r = mid - 1;
		else l = mid + 1;
	}
	int n = k;
    b[1] = 1;
    c[k] = m;
	for(int i = m, num = 0; i >= 1; i--){
		if(num + a[i] > l){
			b[n] = i + 1;
            n--;
			c[n] = i;
			num = a[i];
		}
		else{
			num += a[i];
		}
	}
	for(int i = 1; i <= k; i++){
		cout << b[i] << " " << c[i] << endl;
	} 
	return 0;
}