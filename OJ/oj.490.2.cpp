#include <bits/stdc++.h>
using namespace std;
long long n, ys, lhn;
int main() {
    scanf("%lld", &n);
    lhn = n/2+1;
    for (int i = 1; i <= lhn; i++) {
        if (n % i == 0)
            ys += i;
    }
    ys+=n;
    printf("%lld", ys);
    return 0;
}

