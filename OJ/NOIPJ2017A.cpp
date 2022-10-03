#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    freopen("score.in", "r", stdin);
    freopen("score.out", "w", stdout);
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int score = a * 0.2 + b * 0.3 + c * 0.5;
    printf("%d", score);
    return 0;
}