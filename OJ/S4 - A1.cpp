#include<bits/stdc++.h>
using namespace std;
int n, k, DP[100001][2];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    DP[1][1] = DP[1][2] = 1;

    for(int i = 1; i < k; i++)
        DP[i][2] = 1;
    for(int i = 2; i <= n; i++) {
        DP[i][1] = (DP[i - 1][1] + DP[i - 1][2]) % 5000011;
        if(i - k >= 1)
            DP[i][2] = DP[i - k][1];
        else
            DP[i][2] = 1;
    }
    cout << (DP[n][1] + DP[n][2]) % 5000011 << endl;
    system("pause");
}