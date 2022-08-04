#include<iostream>
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
using namespace std;
const short sz = 1501;
int n, m;
int dirX[9] = {-1, 0, 0, 1, 1, 1, -1, -1, -1};
int dirY[9] = {-1, 1, -1, 1, 0, -1, 1, 0, -1};
int a[sz * sz], sum, mx, cnt;
bool b[sz][sz];
void dfs(int x, int y){
	sum++;
	b[x][y] = 0;
	f(i, 1, 8){//8 direct search
		int xnow = x + dirX[i], ynow = y + dirY[i];
		if(xnow >= 1 && xnow <= n && ynow >= 1 && ynow <= m
                && b[xnow][ynow])
			dfs(xnow, ynow);
	}
}
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	char tmp;
	cin >> n >> m;
	f(i, 1, n)
		f(j, 1, m){
			cin >> tmp;
			if(tmp == '*')
                b[i][j] = 1;
		}
	f(i, 1, n)
		f(j, 1, m)
			if(b[i][j]){
				dfs(i, j);
				a[sum]++;
				if(sum * a[sum] > mx)
                    mx = sum * a[sum];
				sum = 0;//.
			}	
	f(i, 1, sz * sz)
		if(a[i])
            cnt++;
	cout << cnt << ' ' << mx;
	return 0;
}
