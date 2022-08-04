#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
	return a+b>b+a;
}
int main(){
	int n;
	string s[24];
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+n+1,cmp);
	for(int i = 1;i<=n;i++){
		cout<<s[i];
	}
	return 0;
}
//ben ren zi ji xie de dai ma
