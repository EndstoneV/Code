#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main(){
    int x, y;
    cin >> x >> y;
    int mn = min(x, y);
    int ans = mn * 90 + (x - mn) * 60 + (y - mn) * 40;
    cout << ans;   
    return 0;
}