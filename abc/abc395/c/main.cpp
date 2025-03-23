#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int,vector<int>> m;
  rep(i,n) {
    cin >> a.at(i);
    if (!m.contains(a.at(i))) {
      m.insert({a.at(i),{i}});
    } else {
      m.at(a.at(i)).push_back(i);
    }
  }
  int r=-1;
  for(const auto& [k,v]:m) {
    // cout << k << ',' << v.size() << endl;
    if (v.size()<=1) {
      continue;
    }
    int min = INT_MAX;
    rep(i,v.size()-1) {
      auto d = v.at(i+1) - v.at(i) + 1;
      // cout << d << endl;
      if (d<min) min = d;
    }
    if (r==-1) {
      r=min;
    } else if (min<r) {
      r = min;
    }
  }
  return r;
}

int main() {
  cout << solve() << endl;
}
