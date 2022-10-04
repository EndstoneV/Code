#include <bits/stdc++.h>
using namespace std;

char s[1000005];
int n, len, tot, f[1000005];

int main() {
    scanf("%s", s);
    n = strlen(s);
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '[' || s[i] == '(') {
            if((s[i + 1 + f[i + 1]] == ')' && s[i] == '(')
               || (s[i + 1 + f[i + 1]] == ']' && s[i] == '[')) {
                f[i] = f[i + 1] + 2;
                f[i] += f[i + f[i]];
                if(len <= f[i])
                    len = f[i], n = i;
            }
        }
    }
    for(int i = n; i <= len + n - 1; i++)
        printf("%c", s[i]);
    return 0;
}