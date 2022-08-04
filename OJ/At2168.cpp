#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int h, w, cnt;
char c[9][9], rubbish;
int main () {
	scanf ("%d%d", &h, &w);
	for (int i = 1; i <= h; i++){
		rubbish = getchar();
		for (int j = 1; j <= w; j++){
			c[i][j] = getchar ();
		}
	}
	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			if(c[i][j] == '#')
				cnt++;
		}
	}
	if(cnt == h + w - 1) printf("Possible");
	else printf("Impossible");
	return 0;
}

