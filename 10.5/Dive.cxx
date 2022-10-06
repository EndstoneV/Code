#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
int n, cnt = 0;
int a[1003];
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for(int i = 2; i <= n; i++){
        cnt += a[i];
    }
    cnt += a[1] * (n - 2);
    printf("%d", cnt);
    return 0;
}