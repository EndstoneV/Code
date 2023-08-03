#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
int ws(int a) {
    int cnt = 0;
    while(a != 0) {
        a /= 10;
        cnt++;
    }
    return cnt;
}
int main() {
    int x, y;
    int ans = 1;
    scanf("%d%d", &x, &y);
    int ny = pow(10, y);
    for(int i = 1; i <= x; i++) {
        ans *= 2011;
        ans %= ny;
    }
    f(i, 1, y-ws(ans)) putchar('0');
    printf("%d", ans);
    return 0;
}