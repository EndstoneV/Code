#include<bits/stdc++.h>
using namespace std;
struct st{
	int jz,nr;
	int ac;
};
void act(st s){
	s.ac=0;
	int ws=0;
	int tmp=0,ttmp;
	while(s.nr>=1){
		s.nr/=10;
		ws++;
	}
	for(int i=0;i<ws;i++){
		tmp=s.nr%10;
		ttmp=pow(s.jz,i);
		s.ac+=ttmp*;
	}
}
int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	st p[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d%d",&p[i].jz,&p[i].nr);
	}
	for(int i=1;i<=n;i++){
		act(p[i]);
		count+=p[i].ac;
	}
	printf("%d",count);
	return 0;
}
