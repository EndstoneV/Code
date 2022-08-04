#include<bits/stdc++.h>
using namespace std;
int main (){
    int a[100], n, x, tp = 0;
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    while(n){
        tp++;
        a[tp] = n % 2;
        n /= 2;
    }
    while(tp){
        printf("%d", a[tp]);
        tp--;
    }
    return 0;
}