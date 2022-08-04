#include<bits/stdc++.h>
using namespace std;
int cnt;
int main()
{
	int s, a[32];
	scanf("%d", &s);
	for(int i = 1; i <= s; i++){
		scanf("%d", &a[i]);
	}
	for(int i1 = 1; i1 <= s; i1++){
		for(int i2 = i1; i2 <= s; i2++){
			for(int i3 = i2; i3 <= s; i3++){
				if(a[i3]-a[i2] == a[i2]-a[i1] && a[i1] != a[i2] && a[i2] != a[i3]) 
					cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
} 
