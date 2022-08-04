#include<bits/stdc++.h>
using namespace std;
struct fffg{
	int x,y,z;
};
double jl(fffg i,fffg j){
	double ans;
	ans = sqrt((i.x-j.x)*(i.x-j.x)+(i.y-j.y)*(i.y-j.y)+(i.z-j.z)*(i.z-j.z));
	
}
bool cmp(fffg a,fffg b){
	return a.z<b.z;
}
int main(){
	int n;
	double ns=0; 
	scanf("%d",&n);
	fffg p[n+1],p5143;
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
	}
//	for(int i = 1;i<=n;i++){
//		for(int j = i;j<=n;j++){
//			if(p[i].z<p[j].z){
//				p5143 = p[i];
//				p[i]=p[j];
//				p[j]=p5143;
//			}
//		}
//	}
	sort(p+1,p+n+1,cmp);
	for(int i = 2;i<=n;i++){
		ns+=jl(p[i],p[i-1]);
	} 
	printf("%.3lf",ns);
	return 0;
}
