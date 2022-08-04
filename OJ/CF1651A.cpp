#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << (int)pow(2, x) - 1 << endl;
    }
    return 0;
}