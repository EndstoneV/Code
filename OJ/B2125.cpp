#include<bits/stdc++.h>
using namespace std;
int main(){
	struct dkjgfahkf{
		int grade;
		char s[22];
	} p[102],vene;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i].grade;
		getchar();
		gets(p[i].s);
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(p[i].grade<p[j].grade){
				vene= p[i];
				p[i]=p[j];
				p[j]=vene;
			}
		}
	}
	puts(p[1].s);
}

