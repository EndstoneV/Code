#include <bits/stdc++.h>
using namespace std;
#define sp ' '
#define f(i, j, k) for(int i = j; i <= k; i++)
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q, tmp, que1, que2;
    cin >> n >> q;
    int a[n + 1][4], qzh[n + 1][4];
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i++) {
        cin >> tmp;
        a[i][tmp]++;
    }
    for(int j = 1; j <= 3; j++)
        for(int i = 1; i <= n; i++) {
            qzh[i][j] = qzh[i - 1][j] + a[i][j];
        }
    for(int i = 1; i <= q; i++){
        cin >> que1 >> que2;
        for(int j = 1; j <= 3; j++){
            cout << qzh[que2][j] - qzh[que1][j] + a[que1][j] << sp;
        }
        cout << endl;
    }
    return 0;
}