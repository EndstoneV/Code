#include<iostream>
#include<cmath>
using namespace std;
#define ld double
int main()
{
    cout << "Please Input [1 / 0], [Degree To DMS / DMS To Degree]\n";
    int c;
    cin >> c;
    cout << endl;
    if(c){
        ld deg;
        cin >> deg;
        ld d, m, s;
        d = floor(deg);
        ld degree_minus_d = deg - d;
        m = floor(degree_minus_d * 60);
        ld minute_minus_m = degree_minus_d * 60 - m;
        s = minute_minus_m * 60;
        if(s >= 59.9) 
            s = 0, m++;
        ld dms = d + m / 100 + s / 10000;
        cout << dms;
        return 0;
    }
    else{
        ld degree, min, sec, dms;
        cout << "D M S" << endl;
        cin >> dms;
        degree = floor(dms);
        dms -= degree, dms *= 100;
        min = floor(dms + 1e-12);
        dms -= min, dms *= 100;
        sec = dms;
        min += sec / 60;
        degree += min / 60;
        cout << degree;
        return 0;
    }
}