#include<bits/stdc++.h>
using namespace std;
int a[12], n, cnt;
int main(){
    freopen("apple.in", "r", stdin);
    freopen("apple.out", "w", stdout);
    for(int i = 1; i <= 10; i ++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    n += 30;
    for(int i = 1; i <= 10; i ++)
        if(a[i] <= n)
            cnt++;
    printf("%d", cnt);
    return 0;
}