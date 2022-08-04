#include<bits/stdc++.h> 
#define ll long long
#define ld double
#define F(i, j, k) for(int i = j; i <= k; i++)
using namespace std;

const int MAXSIZE = 1000001;
int n, m;
int a[MAXSIZE], nd[MAXSIZE], o[MAXSIZE], t[MAXSIZE], s[MAXSIZE], d[MAXSIZE];
bool check(int x)
{
	bool flag = true;
    F(i, 1, x)
    {
        a[s[i]] += d[i], a[t[i] + 1] -= d[i]; //CHANGE
    }
    F(i, 1, n)
    {
        nd[i] = nd[i - 1] + a[i];//QZH
        if(nd[i] > o[i])
			flag = false;
    }
    return flag;
} 
int main()
{
    scanf("%d %d", &n, &m);
    F(i, 1, n)
		scanf("%d",&o[i]);
    F(i, 1, m)
		scanf("%d %d %d", &d[i], &s[i], &t[i]);
    int l = 1, r = m; 
    if(check(m)){
		putchar(48);
		goto stop;
	}
    while(l < r){
        int mid = (l + r) / 2;
        memset(a, 0, sizeof(a));
        if(check(mid))
			l = mid + 1;
        else
			r = mid;
    }
    printf("-1\n%d", l);
stop:;
	return 0;
}

