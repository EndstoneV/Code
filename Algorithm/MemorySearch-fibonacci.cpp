#include<bits/stdc++.h>
using namespace std;
long long f[50];
long long fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(f[n] == -1)
        f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}
int main(){
    memset(f, -1, sizeof(f));
    int n;
    scanf("%d", &n);
    long long ans = fib(n);
    printf("%lld", ans);
    return 0;
}