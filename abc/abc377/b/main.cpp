#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  vector<bool> w(8,true);
  vector<bool> h(8,true);
  rep(i,8) {
    string s;
    cin >> s;
    rep(j,8) {
      if (s.at(j)=='#') {
        w.at(i) = false;
        h.at(j) = false;
      }
    }
  }
  int r=0;
  rep(i,8) {
    rep(j,8) {
      if (w.at(i) && h.at(j)) {
        ++r;
      }
    }
  }
  cout << r << endl;
}
