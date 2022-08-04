#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
	struct student{
		int no;
		float grade;
	};
	student p[102],temp;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>p[i].no>>p[i].grade;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(p[i].grade<p[j].grade){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("%d %g",p[k].no,p[k].grade);
	return 0;
}

