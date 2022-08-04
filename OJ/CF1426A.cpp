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
        int n, x;
        cin >> n >> x;
        if(n == 1 || n == 2){
            cout << 1 << endl;
            continue;
        }
        n = (n - 3) / x + 2;
        cout << n << endl;
    }
    return 0;
}