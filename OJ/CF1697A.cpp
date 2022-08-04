#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int tmp, cnt = 0;
        int n, x;
        cin >> n >> x;
        for(int i = 1; i <= n; i ++) {
            cin >> tmp;
            cnt += tmp;
        }
        if(cnt - x < 0)
            cout << 0;
        else
            cout << cnt - x;
        cout << endl;
    }
}