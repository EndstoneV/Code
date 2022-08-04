#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int n, v, a[55], cnt, pre = 1, totalv;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> v;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    while(1) {
        if(totalv + a[pre] < v) {
            pre++, totalv += a[pre], cnt++;
        }
        else {
            cout << cnt;
            return 0;
        }
    }
}