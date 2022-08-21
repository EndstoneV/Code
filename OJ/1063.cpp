#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
//max(dp[i][j], dp[i][k] + dp[k + 1][j] + a[i] * b[k] * b[j])
int dp[203][203], s[203][203], a[203], b[203], n, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i + n] = a[i];
	}
	b[2 * n] = a[1];
	for(int i = 1; i <= 2 * n - 1; i++) b[i] = a[i + 1];
	for(int l = 2; l <= n; l++) {
		for(int i = 1; i <= 2 * n - l + 1; i++) {
			int j = i + l - 1;
			for(int k = i; k < j; k++) dp[i][j] = max(dp[i][j], dp[i][k] + dp[k + 1][j] + a[i] * b[k] * b[j]);
		}
	}
	for(int i = 1; i <= n; i++) ans = max(ans, dp[i][i + n - 1]);
	cout << ans;
	return 0;
}