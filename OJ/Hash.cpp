#include<bits/stdc++.h>
using std::string;

const int M = 1e9 + 7;
const int B = 233;

typedef long long ll;

int get_hash(const string& s) {
  int res = 0;
  for (int i = 0; i < (int)s.size(); ++i) {
    res = (ll)(res * B + s[i]) % M;
  }
  return res;
}

bool cmp(const string& s, const string& t) {
  return get_hash(s) == get_hash(t);
}
int main(){
    string a, b;
    std::cin >> a >> b;
    if(cmp(a, b))
        std::cout << "\n[The same.]\n";
    else std::cout << "\n[Different.]\n";
}