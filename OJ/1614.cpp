#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n, m, mn = INT_MAX;
    cin >> n >> m;
    int a[n + 1], b[n + 5];
    cin >> a[1];
    b[0] = 0;
    b[1] = a[1];
    for(int i = 2; i <= n ; i++)
        cin >> a[i], b[i] = b[i - 1] + a[i];
    for(int i = 1; i <= n - m + 1; i++)
        mn = min(mn, b[i + m - 1] - b[i - 1]);
    cout << mn;
    return 0;
}