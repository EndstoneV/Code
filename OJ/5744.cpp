#include<bits/stdc++.h>
int main(){
	struct ghuhuhuhuhu{
		char name[100];
		int age,grade;
	} s[100];
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		scanf("%s %d %d",&s[i].name,&s[i].age,&s[i].grade);
		s[i].age++;
		if(s[i].grade/5*6>=600) s[i].grade=600;
		else s[i].grade=s[i].grade/5*6;
	}
	for(int i=1;i<=x;i++)
		printf("%s %d %d\n",s[i].name,s[i].age,s[i].grade);
}
