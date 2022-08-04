#include<iostream>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 1; i <= n; i ++)
        cin >> s[i];
    int len = s[1].size();
    int j = 1;
    char tmp[22];
    f(i, 1, len)
        tmp[i] = (char)s[1][i];
    for(int i = 1; i <= n; i++){
        for(j; j <= len; j++){
            if((char)s[i][j] != tmp[j])
                goto outp;
        }
    }
    outp:cout << j;
}