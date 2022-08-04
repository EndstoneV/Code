#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, p;
    cin >> t;
    while(t--){
        cin >> p;
        for(int i = 2; i <= p; i++){
            for(int j = 2; j < i; j++){
                if(p % i == p % j){
                    cout << j << " " << i << endl;
                    goto x;
                }
            }
        }
        x:;
    }
}