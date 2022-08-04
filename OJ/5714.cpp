#include<bits/stdc++.h>
using namespace std;
int main(){
	double m,h,bmi;
	cin>>m>>h;
	h*=h;
	bmi=m/h;
	if(bmi<=18.5) cout<<"Underweight";
	else if(bmi>=18.5&&bmi<24) cout<<"Normal";
	else cout<<bmi<<"\nOverweight";
	return 0;
}

