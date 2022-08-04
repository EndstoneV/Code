#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	struct Phefapheeguer{
		char name[9];
		int c, m, e;
		int sum;
	};
	Phefapheeguer p[n+1], swp;
	for(int i = 1; i <= n; i ++){
		scanf("%s%d%d%d", p[i].name, &p[i].c, &p[i].m, &p[i].e);
		p[i].sum = p[i].c + p[i].m + p[i].e;
	} 
	for(int i = 1; i <= n; i ++){
		for(int j = i; j <= n; j ++){
			if(p[i].sum<p[j].sum){
				swp = p[i];
				p[i] = p[j];
				p[j] = swp;
			}
		}
	}
	printf("%s %d %d %d", p[1].name, p[1].c, p[1].m, p[1].e);
	return 0;
}
