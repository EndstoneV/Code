#include <bits/stdc++.h>
using namespace std;

char a[100];
int len;
long long res = 0, cur = 0;
int sign = 1;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a + 1;
    len = strlen(a);
    for(int i = 1; i <= len; i++) {
        if(a[i] == '-' || a[i] == '+') {
            res += sign * cur;
            cur = 0;
        }
        if(a[i] == '-')
            sign = -1;
        if(a[i] == '+')
            sign = 1;
        cur = cur * 10 + a[i] - '0';
    }
    res += sign * cur;
    cout << res;
    return 0;
}