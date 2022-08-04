#include<bits/stdc++.h>
using namespace std;
//char change(char x){
//	if(x>='a'&&x<='z') x-=32;
//	return x;
//}
int main(){
	int n;
	struct GHHGHG{
		char name[21];
		int grade;
	};
	GHHGHG p[21],temp;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i].name>>p[i].grade;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(p[i].grade<p[j].grade){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}if(p[i].grade==p[j].grade){
				if(strcmp(p[i].name,p[j].name)>0){
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
			}
	}
	}
	for(int i=1;i<=n;i++){
		cout<<p[i].name<<" "<<p[i].grade<<endl;
	}
	return 0;
}

