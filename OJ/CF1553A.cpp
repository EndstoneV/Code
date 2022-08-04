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
        int n;
        cin >> n;
        cout << n / 10 + (n % 10 == 9) << endl;
    }
    return 0;
}