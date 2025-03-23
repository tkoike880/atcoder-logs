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
  ll b=0;
  vector<int> x(n);
  map<int, ll> dp;
  rep (i,n) {
    cin >> x[i];
  }
  rep (i,n) {
    int p;
    cin >> p;
    b += p;
    dp.insert({x.at(i), b});
  }
  int q;
  cin >> q;
  rep (i,q) {
    int l,r;
    ll pl,pr;
    cin >> l >> r;
    auto itl = dp.lower_bound(l);
    if (itl == dp.begin()) {
      pl=0;
    } else {
      --itl;
      pl = itl->second;
    }

    auto itr = dp.upper_bound(r);
    if (itr == dp.begin()) {
      pr=0;
    } else {
      --itr;
      pr = itr->second;
    }

    cout << (pr - pl) << endl;
  }
}
