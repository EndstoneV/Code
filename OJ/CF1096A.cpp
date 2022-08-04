#include <cstdio>
using namespace std;
int main() {
    int T, l;
    scanf("%d", &T);
    while(T--){
        scanf("%d%*d", &l);
        printf("%d %d\n", l, 2 * l);
    }
    return 0;
}