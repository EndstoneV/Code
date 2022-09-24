#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int n, a[10005];
bool flag = false;
int main(){
    int T;
    cin >> T;
    while(T--){
        flag = false;
        cin >> n;
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
            if(!a[i])
                flag = true;
        }
        if(flag)
            cout << "yes\n";
        else cout << "no\n";
    }   
    return 0;
}