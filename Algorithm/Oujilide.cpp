#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}