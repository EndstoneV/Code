#include<bits/stdc++.h>
using namespace std;
struct phfphg{
		char name[22];
		int y, m, d;
		int id;
};
bool cmp(phfphg a, phfphg b){
	if(a.y != b.y) return a.y < b.y;
	if(a.y == b.y && a.m != b.m) return a.m < b.m;
	if(a.y == b.y && a.m == b.m && a.d != b.d) return a.d < b.d;
	else return a.id > b.id;
}
int main(){
	int n;
	scanf("%d", &n);
	phfphg p[n+1];
	for(int i = 1; i <= n; i ++){
		scanf("%s%d%d%d", p[i].name, &p[i].y, &p[i].m, &p[i].d);
		p[i].id = i;
	}
	sort(p+1,p+n+1,cmp);
	for(int i = 1; i <= n; i ++){
		printf("%s\n",p[i].name);
	}
	return 0;
}
