#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<pair<ll,ll>> dp(n);
  rep (i,n) {
    int a;
    cin >> a;
    if (i==0) {
      dp[0] = {a,0};
      continue;
    }
    auto [po, pe] = dp[i-1];
    dp[i] = {max(po, pe + a), max(pe, po + 2*a)};
  }
  ll r = max(dp[n-1].first, dp[n-1].second);
  cout << r << endl;
}
