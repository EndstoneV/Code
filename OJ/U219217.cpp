#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=n;i++)
using namespace std;
long long num,a[1001],p,m,n,ans[2001];
string s;
char exchange_int_char(int a){
    char b;
    switch (a)
    {
    case 0:b = '0'; break;
    case 1:b = '1'; break;
    case 2:b = '2'; break;
    case 3:b = '3'; break;
    case 4:b = '4'; break;
    case 5:b = '5'; break;
    case 6:b = '6'; break;
    case 7:b = '7'; break;
    case 8:b = '8'; break;
    case 9:b = '9'; break;
    case 10:b = 'A'; break;
    case 11:b = 'B'; break;
    case 12:b = 'C'; break;
    case 13:b = 'D'; break;
    case 14:b = 'E'; break;
    case 15:b = 'F'; break;
    default:break;
    }
    return b;
}
void t(int n){
	printf("0x");
    int m;
    int i = 0;
    char* arr = new char[9];
    if (n > 15)
    {
        while (n >= 16)
        {
            m = n % 16;
            n = n / 16;
            arr[i] = exchange_int_char(m);
            i++;
        }
        arr[i] = exchange_int_char(n);
        for (int j = i; j >= 0; j--){
            cout << arr[j];
        }
    }
    else{
        arr[i] = exchange_int_char(n);
        cout << arr[i];
    }
}
int main()
{
	getchar();
	int i = 1;
	long long a[1005];
	while(~(scanf("%lld%*c", &a[i]))) i++;
	i--;
	putchar('{');
	for(int j = 1; j <= i; j++){
		if(to_string(a[j]).length() > 12)
			t(a[j]);
		else
			printf("%lld", a[j]);
		if(j != i)
			putchar(',');
	}
	putchar('}');
	return 0;
 } 
