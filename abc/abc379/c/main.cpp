#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int solve() {
  int n,m,c=0;
  cin >> n >> m;
  vector<int> x(m+1);
  map<int,int> v;
  rep(i,m) {
    cin >> x[i];
    --x[i];
  }
  x[m] = n;
  rep(i,m) {
    int a;
    cin >> a;
    v.insert({x[i], a});
    c += a;
  }
  v.insert({n,0});
  if (c != n) {
    return -1;
  }
  if (!v.contains(0)) {
    return -1;
  }
  int dp = v.at(0), r=0;
  for (int i=1; i<=m; ++i) {
    int xx = x[i] - x[i-1] - 1;
    // cout << dp << "," << xx << endl;
    if (dp + v.at(x[i]) <= xx) {
      return -1;
    }
    dp = dp + v.at(x[i]) - xx - 1;
    r += (xx * (xx + 1)) >> 1;
    r += (xx+1) * dp;
    // r += 1;
  }
  return r;
}

int main() {
  cout << solve() << endl;
}
