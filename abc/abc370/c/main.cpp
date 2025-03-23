#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s,t;
  cin >> s >> t;
  if (s==t) {
    cout << 0 << endl;
    return 0;
  }
  int ss = s.size();
  list<pair<int,char>> lp;
  list<pair<int,char>> lm;
  vector<string> x;
  rep(i,ss) {
    if (s.at(i) != t.at(i)) {
      if (s.at(i) > t.at(i)) {
        lp.push_back({i, t.at(i)});
      } else {
        lm.push_front({i, t.at(i)});
      }
    }
  }
  string u = s;
  for (const auto& [i,c]:lp) {
    u.at(i) = c;
    x.push_back(u);
  }
  for (const auto& [i,c]:lm) {
    u.at(i) = c;
    x.push_back(u);
  }
  cout << x.size() << endl;
  for (const auto& e:x) {
    cout << e << endl;
  }
}
