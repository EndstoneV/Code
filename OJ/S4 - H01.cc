#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[55];
int main() {
    a[1] = 2, a[2] = 3;
    scanf("%d", &n);
    for(int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%lld", a[n]);
    return 0;
}