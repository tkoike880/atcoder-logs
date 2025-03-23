#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string x;
  cin >> x;
  int s = x.size();
  for (int i=0;i<4;++i) {
    if (x.at(s-1) == '0' || x.at(s-1) == '.') {
      x.pop_back();
      --s;
    } else {
      break;
    }
  }
  cout << x << endl;
}
