#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)
string st;
int cnt = 0;
int main(){
    cin >> st;
    int len = st.size();
    for(int i = 0; i < len; i++) 
        if(st[i] == '1')
            cnt++;  
    printf("%d", cnt);
    return 0;
}