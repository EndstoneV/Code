#include <cstdio>
#include<iostream>
using namespace std;
int main (){
    int a, b, p;
    int ans = 1;
    scanf("%d%d%d", &a, &b, &p);
    while(b){
        if(b & 1)
            ans = (long long) ans * a % p;
        a = (long long) a * a % p;
        b >>= 1;
    }
    printf("%d", ans % p);
    return 0;
}
