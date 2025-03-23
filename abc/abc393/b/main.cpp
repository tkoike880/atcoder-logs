#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int ss = s.size();
  int r=0;
  rep1(i,ss) {
    rep (j,ss) {
      if (j+i>=ss || j+i+i>=ss) {
        break;
      }
      if (s.at(j) == 'A' && s.at(j+i) == 'B' && s.at(j+i+i) == 'C') {
        ++r;
      }
    }
  }
  cout << r << endl;
}
