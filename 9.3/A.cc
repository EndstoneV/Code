#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
struct group
{
    int d, v;
} a[100003];

// bool cmp(group x, group y){
//     return x.v > y.v;
// }
using namespace std;
int n, sum;
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d%d", &a[i].d, &a[i].v);
    // sort(a + 1, a + n + 1, cmp);
    for(int i = n; i >= 1; i--) {
        if(a[i].v < a[i - 1].v) {
            a[i - 1].v = a[i].v;
        }
        else
            sum++;  // YOU CAN'T REACH!
    }
    printf("%d\n", sum);
    return 0;
}