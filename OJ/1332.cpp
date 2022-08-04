#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m, a, b, mx[N];
struct node{
	int x, y;
} p[N], q[N];
int main(){
	memset(mx, 0x3f, sizeof mx);
	scanf("%d%d%d%d", &n, &m, &a, &b);
	for(int i = 1; i <= a; i++) scanf("%d%d", &p[i].x, &p[i].y);
	for(int i = 1; i <= b; i++) scanf("%d%d", &q[i].x, &q[i].y);
	for(int i = 1; i <= b; i++) for(int j = 1; j <= a; j++) mx[i] = min(mx[i], abs(p[j].x - q[i].x) + abs(p[j].y - q[i].y));
	for(int i = 1; i <= b; i++) printf("%d\n", mx[i]);
	return 0;			
}