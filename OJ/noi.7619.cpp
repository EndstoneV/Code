#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	struct kakka{
		char sex[7];
		float height;
	};
	kakka a[41],b[41],in;//female a;male b
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>in.sex>>in.height;
		if(strcmp(in.sex,"female")==0){a[i]=in; cnt++;}
		else{b[i]=in;}
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i].height<a[j].height){
				in =a[i];
				a[i]=a[j];
				a[j]=in;
			}
			if(b[i].height<b[j].height){
				in =b[i];
				b[i]=b[j];
				b[j]=in;
			}
		}
	}
	for(int i=n-cnt;i>0;i--) printf("%.2f ",b[i].height);
	for(int i=1;i<=cnt;i++) printf("%.2f ",a[i].height);
	return 0;
}

