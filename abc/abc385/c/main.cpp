#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int solve(vector<int> v) {
  if (v.size() < 3) return v.size();
  if (v.at(0) != 0) {
    int f = v.at(0);
    rep(i,v.size()) {
      v.at(i) -= f;
    }
    return solve(v);
  }
  int r=0;
  rep1(i,3000) {
    int rr=0;
    rep(j,v.size()) {
      if ((v.at(j) % i) == 0) ++rr;
    }
    if (rr > r) r = rr;
  }
  v.erase(v.begin());
  int r2 = solve(v);
  if (r2>r) r=r2;
  return r;
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v(3000);
  rep(i,n) {
    int h;
    cin >> h;
    v.at(h-1).push_back(i);
  }
  int r=0;
  rep(j,3000) {
    auto vh = v.at(j);
    if (vh.empty()) continue;
    int c = solve(vh);
    if (c>r) r=c;
  }
  cout << r << endl;
}
