#include <bits/stdc++.h>
#define ll long long
#define np next_permutation
#define ld double
using namespace  std;
int a[203], b[203], c, m, s, len, j;
int main() {
    scanf("%d%d%d", &m, &s, &c);
    for(int i = 0; i < c; i++)
        scanf("%d", &a[i]);
    sort(a, a + c);
    for(int i = 1; i < c; i++)
        b[i] = a[i] - a[i - 1] - 1;//number -> *|empty|*
    sort(b + 1, b + c);
    len = c; // chushi quanbu fugai (changdu )
    j   = 1;
    for(int x = c; x > m; x--, j++)//间隔小+数量一定=最节约
        len += b[j];
    printf("%d", len);
}