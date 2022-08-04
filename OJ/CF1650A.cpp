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
    char s[( int )1e7];
    char c;
    while(t--) {
        memset(s, 0, sizeof(s));
        cin >> s;
        cin >> c;
        for(int i = 1; i <= strlen(s); i++) {
            if(s[i] == c && i % 2 == 1) {
                cout << "yes" << endl;
                continue;
            }
        }
        cout << "no" << endl;
    }
}