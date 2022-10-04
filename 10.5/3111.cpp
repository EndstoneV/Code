#include <bits/stdc++.h>
#define ll long long
#define ld double
#define np next_permutation
using namespace std;
long long n, t, last[100005];
struct cow {
    long long x, v;
} a[100005];
int main() {
    scanf("%d%d", &n, &t);
    for(int i = 1; i <= n; i++) {
        scanf("%d%d", &a[i].x, &a[i].v);
        last[i] = a[i].x + a[i].v * t;
    }
    long long res = 1, la = last[n];
    for(int i = n - 1; i >= 1; i--) {
        if(last[i] < la) {
            la = last[i];
            res++;
        }
    }
    printf("%ld", res);
    return 0;
}