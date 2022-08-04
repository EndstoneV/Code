#include <bits/stdc++.h>
using namespace std;
int n, m, l, tmp;
int main() {
    scanf("%d%d%d", &n, &m, &l);
    if(m % n == 0) {
        if(l - m >= n) printf("%d", n - 1);
        else printf("%d", l % n);
    }
    else{
        tmp = (m / n + 1) * n - 1;
        if(tmp <= l && tmp >= m) printf("%d", n - 1);
        else printf("%d", l % n);
    }
    return 0;
}