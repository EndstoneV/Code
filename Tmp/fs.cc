#include <bits/stdc++.h>
using namespace std;
const int mxsz=1e9+1;
long long a[152], b[mxsz], c[mxsz];
int main() {
    int z;
    cin >> z;
    for (int k = 0; k < z; k++) {
        long long v, n;
        cin >> v >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> c[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = v; j >= a[i]; j--) {
                b[j] = max(b[j], b[j - a[i]] + c[i]);
            }
        }
        cout << b[v];
    }
    return 0;
}