#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main(){
    int k, mx = -0x7fffffff;
    cin >> k;
    int a[k + 1];
    f(i, 1, k)
        cin >> a[i];
    sort(a + 1, a + k + 1);
    f(i, 2, k){
        if(a[i] - a[i - 1] > mx)
            mx = a[i] - a[i - 1];
    }
    cout << mx; 
    return 0;
}