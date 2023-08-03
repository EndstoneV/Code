#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a[5], b[5];
        for(int i = 1; i <= 3; i++)
            scanf("%d%d", &a[i], &b[i]);
        sort(a + 1, a + 3 + 1);
        sort(b + 1, b + 3 + 1);
        if(a[1] == a[2] || a[2] == a[3]) {
            if(b[1] == b[2] || b[2] == b[3]) {
                printf("NO\n");
                goto end;
            }
        }
        printf("YES\n");
    end:;
    }
    return 0;
}