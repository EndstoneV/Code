#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    f(i, 1, n){
        cin >> a[i];
        if(a[i] % 2)
            cout << a[i] << ' ', a[i] = -1;
    } 
    cout << '\n';
    f(i, 1, n){
        if(a[i] != -1)
            cout << a[i] << ' ';
    }
    return 0;
}