#include<bits/stdc++.h>
using namespace std;
char s[110];
int maximum,minimum=999;
const int zs[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int cnt[26];
int main(){
	scanf("%s",&s);
	int n=strlen(s);
	for(int i=0;i<n;i++){
		cnt[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]>maximum)
			maximum=cnt[i];
		if(cnt[i]>0&&cnt[i]<minimum)
			minimum=cnt[i];
	}
	for(int i=0;i<25;i++){
		if(maximum-minimum==zs[i]){
			printf("Lucky Word\n%d",maximum-minimum);
			return 0;
		}
	}
	printf("No Answer\n0");
	return 0;
}
