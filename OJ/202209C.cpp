#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main(){
    int n, k, ans = 0;
    cin >> n >> k;
    int tmp;
    f(i, 1, n){
        cin >> tmp;
        if(tmp == k)
            ans++;
    }   
    cout << ans;
    return 0;
}