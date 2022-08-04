#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, mn = 1e7 + 5;
        cin >> n;
        int a[n + 1];
        f(i, 1, n) {
            cin >> a[i];
            if(a[i] < mn)
                mn = a[i];
        }
        int cnt = 0;
        f(i, 1, n) {
            cnt += a[i] - mn;
        }
        cout << cnt << endl;
    }
    return 0;
}