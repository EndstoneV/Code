#include <bits/stdc++.h>
using namespace std;
int pow2(int x) {
    int ret = 1;
    for(int i = 1; i <= x; i++)
        ret *= 2;
    return ret;
}

int main() {
    int n, i = 1;
    scanf("%d", &n);
    if(n % 2) {
        printf("-1");
        return 0;
    }
    while(1) {
        int b = pow(2, i);
        if(b > n) {
            printf("%d ", int(pow2(i - 1)));
            n -= pow2(i - 1);
            i = 0;
        }
        if(!n) {
            return 0;
        }
        i++;
    }
    return 0;
}