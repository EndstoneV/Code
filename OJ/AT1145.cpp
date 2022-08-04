#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
bool prime(int a){
    bool n = 1;
	for(int i = 2; i < sqrt(a); i++)
		if(a % i == 0){
			n = 0;
			break;
		}
	if(n == 1 && a != 0 && a != 1)
        return true;
    else
        return false;
}
int main(){
    int n;
    cin >> n;
    int ans = (1 + n) * n / 2;
    if(prime(ans))
        cout << "WANWAN" << endl;
    else cout << "BOWWOW" << endl;
}