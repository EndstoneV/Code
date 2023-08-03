#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int t, n;
char s[105];
int main() {
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        scanf("%s", s + 1);
        if(n % 3 == 2)
            printf("NO\n");
        else {
            for(int i = 3; i <= n; i += 3)
                if(s[i] != s[i - 1]) {
                    printf("NO\n");
                    goto con;
                }
            printf("YES\n");
        }
    con:;
    }
    return 0;
}