#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, fsx, cnt, fsxh;
    struct kakka {
        int k, s;
    };
    kakka a[5002], tp;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i].k >> a[i].s;
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(a[i].s < a[j].s) {
                tp   = a[i];
                a[i] = a[j];
                a[j] = tp;
            }	
            if(a[i].s == a[j].s) {
                if(a[i].k > a[j].k) {
                    tp   = a[i];
                    a[i] = a[j];
                    a[j] = tp;
                }
            }
        }
    }
    fsxh = floor(m * 1.5);
    fsx  = a[fsxh].s;
    cout << fsx << " ";
    for(int i = 1; i <= n; i++) {
        if(a[i].s >= fsx)
            cnt++;
    }
    cout << cnt;
    for(int i = 1; i <= n; i++) {
        if(a[i].s >= fsx) {
            cout << endl << a[i].k << " " << a[i].s;
        }
    }
    return 0;
}
