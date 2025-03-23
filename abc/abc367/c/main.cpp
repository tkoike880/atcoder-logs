#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

vector<vector<int>> solve(vector<int> r, int n, int k, vector<int> v, int p) {
  vector<vector<int>> rv;
  if (p == n-1) {
    int ss = 0;
    rep (i, n-1) {
      ss += v.at(i);
    }
    rep1 (i, r.at(p)) {
      v.at(p) = i;
      if ((ss + v.at(p)) % k == 0) {
        rv.push_back(vector<int>(v));
      }
    }
  } else {
    rep1 (i, r.at(p)) {
      v.at(p) = i;
      auto rvv = solve(r,n,k,v,p+1);
      for (const auto& rvvv: rvv) {
        rv.push_back(rvvv);
      }
    }
  }
  return rv;
}

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> r(n);
  vector<int> v(n,1);
  rep (i, n) {
    cin >> r.at(i);
  }
  auto rv = solve(r,n,k,v,0);
  for (const auto& vv:rv) {
    rep (j, vv.size()-1) {
      cout << vv.at(j) << " ";
    }
    cout << vv.at(vv.size()-1) << endl;
  }
}
