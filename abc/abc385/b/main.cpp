#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

pair<int, int> move(pair<int, int> p, char tt) {
  if (tt == 'U') --p.first;
  if (tt == 'D') ++p.first;
  if (tt == 'L') --p.second;
  if (tt == 'R') ++p.second;
  return p;
}

int main() {
  int h,w,x,y;
  cin >> h >> w >> x >> y;
  pair<int, int> p = {x-1,y-1};
  vector<vector<char>> v(h, vector<char>(w));
  rep (i,h) {
    rep (j,w) {
      cin >> v.at(i).at(j);
    }
  }
  string t;
  cin >> t;
  set<pair<int, int>> st;
  rep(i,t.size()) {
    // cout << p.first << ',' << p.second << endl;
    auto pp = move(p, t.at(i));
    if (!(0 <= pp.first && pp.first < h && 0 <= pp.second && pp.second < w)) {
      continue;
    }
    if (v.at(pp.first).at(pp.second) == '#') {
      continue;
    }
    if (v.at(pp.first).at(pp.second) == '@') {
      st.insert(pp);
      p = pp;
    } else {
      p=pp;
    }
  }
  cout << ++p.first << ' ' << ++p.second << ' ' << st.size() << endl;
}
