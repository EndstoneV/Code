#include<bits/stdc++.h>
#define l() length()
using namespace std;
//
//bool cmp(string a,string b){
//	if(a.length()!=b.length()){
//		return a.length()>b.length();
//	}
//	else{
//		return a>b;
//	}
//}
//
int main(){
	int n;
	scanf("%d",&n);
	string s[n+1];
	int id[n+1];
	for(int i=1;i<=n;i++){
		cin>>s[i];
		id[i]=i;
	}
//	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(s[i].l()<s[j].l()){
				swap(s[i],s[j]);
				swap(id[i],id[j]);
			}
			else if(s[i].l()==s[j].l()){
				if(strcmp(s[i].c_str(),s[j].c_str())<0){
					swap(s[i],s[j]);
					swap(id[i],id[j]);
				}
			}
		}
	}
	cout<<id[1]<<endl<<s[1];
}

