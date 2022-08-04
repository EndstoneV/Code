#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        bool flag = false;
        for(int i = 0; i <= m / 7; i++){
            if((m - 7 * i) % 3 == 0){
                cout << "YES" << endl;
                flag = true;
                goto orz;
            }
        }
        orz:;
        if(!flag)
            cout << "NO" << endl;
    }
}