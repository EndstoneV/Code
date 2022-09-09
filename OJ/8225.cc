#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int main(int argc, char** argv)
{
    int t;
    cin >> t;
    while(t--){
        int k;
        char n[20];
        cin >> k;
        cin >> n + 1;
        if(strlen(n) % k){
            cout << "baka" << endl;
            goto end;
        }
        for(int i = 1; i < strlen(n); i++){
            if(n[i] != '9'){
                cout << "baka" << endl;
                goto end;
            }
        }
        cout << "aya" << endl;
        end:;
    }
}