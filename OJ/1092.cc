#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int n, x[26], m[26];
bool N[26], L[26], ans = 0;
char s1[26], s2[26], s3[26], s[78];
bool f(int pos) {
    bool R = 1;
    for(int i = 3 * n - 1; i > pos; i -= 3) {
        if((L[s[i] - 'A'] && L[s[i - 1] - 'A'] && L[s[i - 2] - 'A']) && (x[s[i] - 'A'] != (x[s[i - 1] - 'A'] + x[s[i - 2] - 'A']) % n && x[s[i] - 'A'] != (x[s[i - 1] - 'A'] + x[s[i - 2] - 'A'] + 1) % n)) {
            R = 0;
            break;
        }
    }
    return R;
}
bool check(int pos){
    if(pos % 3 != 2)
		return true;
    int stozkx = pos / 3 * 3, sum = x[s[stozkx] - 'A'] + x[s[stozkx + 1] - 'A'] + m[pos / 3], tmp = sum;
    sum = sum % n;
    if(sum == x[s[stozkx + 2] - 'A']) {
        m[pos / 3 + 1] = tmp / n;
        return true;
    } else return false;
}
void dfs(int pos){
    if(ans || !check(pos - 1) || !f(pos - 1)) return;
    if(pos == 3 * n) {
        ans = 1;
        for(int i = 0; i < n; i++)
        	cout << x[i] << " ";
        return;
    }
    if(!L[s[pos] - 'A']) {
        for(int i = n - 1; i >= 0; i--) {
            if(!N[i]) {
                int tmp2 = m[pos / 3];
                x[s[pos] - 'A'] = i;
                N[i] = 1;
                L[s[pos] - 'A'] = 1;

                dfs(pos + 1);

                m[pos / 3] = tmp2;
                N[i] = 0;
                L[s[pos] - 'A'] = 0;
            }
        }
    }
	else dfs(pos + 1);
    return;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s1[i];
        s[3 * (n - i - 1) + 0] = s1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> s2[i];
        s[3 * (n - i - 1) + 1] = s2[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> s3[i];
        s[3 * (n - i - 1) + 2] = s3[i];
    }
    dfs(0);
    return 0;
}