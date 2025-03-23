#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool solve(vector<int> *a, ll s, int n) {
  vector<pair<int,int>> v;
  vector<pair<int,int>> vv;
  rep(i,n) {
    if (a->at(i) == s) {
      return true;
    }
    if (a->at(i) < s) {
      v.push_back({i,a->at(i)});
    }
  }
  if (v.empty()) {
    return false;
  }
  rep1(ii,n-1) {
    for (const auto& [i,ss]:v) {
      int s2 = ss + a->at((i+ii)%n);
      if (s2 == s) {
        return true;
      }
      if (s2 < s) {
        vv.push_back({i,s2});
      }
    }
    if (vv.empty()) {
      return false;
    }
    v = vv;
    vv.clear();
  }
  return false;
}

int main() {
  int n;
  ll s,ss=0;
  cin >> n >> s;
  vector<int> a(n);
  rep(i,n) {
    cin >> a.at(i);
    ss += a.at(i);
  }
  if (s>ss) {
    s %= ss;
  }
  cout << (solve(&a, s, n) ? "Yes" : "No") << endl;
}
