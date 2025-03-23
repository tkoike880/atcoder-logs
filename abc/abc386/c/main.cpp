#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool sol(string s, string t) {
  if (s.size() - t.size() != 1) {
    return false;
  }
  int i=0,c=0;
  rep(j,t.size()) {
    if (s.at(i) != t.at(j)) {
      // cout << s[i] << t[j] << endl;
      if (c>1) {
        return false;
      }
      ++c;
      ++i;
      if (s.at(i) != t.at(j)) {
        return false;
      }
    }
    ++i;
  }
  return true;
}

int main() {
  int k;
  string s,t;
  cin >> k >> s >> t;
  if (s.size() == t.size()) {
    int c=0;
    rep(i,s.size()) {
      if (s.at(i) != t.at(i)) {
        ++c;
      }
    }
    cout << (c<2 ? "Yes" : "No") << endl;
    return 0;
  }
  cout << ((s.size() > t.size() ? sol(s,t) : sol(t,s)) ? "Yes" : "No") << endl;
}
