#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int c[3];
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y')
            c[1] ++;
        if(s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l')
            c[2] ++;
    }
    cout << c[1] << "\n" << c[2];
    return 0;
}
/*

.....girloy.....
.....girly......
.....girlogirl




*/