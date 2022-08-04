#include<bits/stdc++.h>
using namespace std;
int even(int n){
	int ev = 0;
	while(n >= 1){
        if(!(n % 10 % 2)) 
            ev++;
	    n /= 10;
	}
	return ev;
}  
int pri(int n){
    int cnt = 1;
	for(int i = 1; i <= n / 2; i++){
		if(n % i == 0)
            cnt++;
	}
	return cnt;
}	
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, m, k, cc = 0;
        cin >> n >> m >> k;
        for(int i = pow(10, n - 1); i <= pow(10, n); i++){
            if(m == even(i) && k == pri(i))
                cc++;
        }
        if(!cc){
            cout << -1 << endl;
            continue;
        }
        cout << cc << endl;
        for(int i = pow(10, n - 1); i <= pow(10, n); i++){
            if(m == even(i) && k == pri(i))
                cout << i << endl;
        }
    }
}