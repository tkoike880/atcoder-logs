#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var

int count(int m, int x) {
  int c=0;
  rep(i, m) {
    if (x & 1) {
      ++c;
    }
    x >>= 1;
  }
  return c;
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> s(n,0);
  rep(i,n) {
    rep(j,m) {
      char c;
      cin >> c;
      s[i] |= (c == 'o' ? 1:0);
      s[i] <<= 1;
    }
  }
  int c=0, o, g, ss=0;
  map<int, int> mm;
  g = (1 << m) - 1;
  bool f = false;
  rep(i,n) {
    int cc =c;
    o=-1;
    rep(j,n) {
      if (mm.find(j) != mm.end()) {
        continue;
      }
      if (ss | s[j] == g) {
        ++c;
        f = true;
        break;
      }
      int ccc = count(m, ss | s[j]);
      if (ccc > cc) {
        cc = ccc;
        o=j;
      }
    }
    c = cc;
    mm.insert({o, 1});
    if (f) {
      break;
    }
  }
  cout << c << endl;
}
