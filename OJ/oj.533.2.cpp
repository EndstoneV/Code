#include <bits/stdc++.h>
using namespace std;
int a[1005], i, j, k, m, t;
int main() {
    int n;
    scanf("%d", &n);
    if(n == 1)
        printf("%d\n", n);
    for(i = 0; i < n; i++)
        a[i] = i + 1;
    for(i = 0; i < n; i++) {
        if(m == n - 2) {
            if(i % 2 == 0)
                for(j = 0; j < n; j++)
                    if(a[j] != -1) {
                        printf("%d\n", a[j]);
                        break;
                    }
            if(i % 2 == 1)
                for(j = n - 1; j >= 0; j--)
                    if(a[j] != -1) {
                        printf("%d", a[j]);
                        break;
                    }
            break;
        }
        if(i % 2 == 1) {
            t = 0;
            for(j = 0; j < n; j++) {
                if(a[j] != -1) {
                    t++;
                    if(t == 3) {
                        t    = 0;
                        a[j] = -1;
                        m++;
                    }
                }
            }
        }
        if(i % 2 == 1) {
            t = 0;
            for(j = n - 1; j >= 0; j--) {
                if(a[j] != -1) {
                    t++;
                    if(t == 3) {
                        a[j] = -1;
                        t    = 0;
                        m++;
                    }
                }
            }
        }
    }
}
