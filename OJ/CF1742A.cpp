#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    int t, a, b, c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%d", &a, &b, &c);
        if(a + b == c || a + c == b || b + c == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}