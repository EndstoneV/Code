#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int main()
{
    // int t;
    // cin >> t;//有t组数据
    // while(t--){
    //     int k;
    //     ll n;
    //     cin >> k >> n;//每组数据的k, n
    //     int cnt = 0;
    //     while(n >= 1){
    //         if(n % 10 != 9){//每一个数位均为9
    //             cout << "baka" << endl;
    //             goto end;
    //         }
    //         n /= 10;
    //         cnt++;
    //     }
    //     if(k == 1){//满足以上条件都是1阶天才数
    //         cout << "aya" << endl;
    //         goto end;
    //     }
    //     if(cnt % k != 0){//不是k位
    //         cout << "baka" << endl;
    //         goto end;
    //     }
    //     cout << "aya" << endl;//否则满足
    //     end:;
    // }   
    int t;
    cin >> t;
    while(t--){
        int k;
        char n[20];
        cin >> k;
        cin >> n + 1;
        // cout << endl << n + 1 << endl;
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