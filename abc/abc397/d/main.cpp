#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

pair<ll,ll> solve(ll n, vector<ll> *v) {
  for (int i=2; i<1000000; ++i) {
    for (int j=1; j<i; ++j) {
      if (v->at(i) - v->at(j) == n) {
        return {i,j};
      }
    }
  }
  return {-1,-1};
}

int main() {
  ll n;
  cin >> n;
  vector<ll> v(1000000);
  for (ll i = 1; i<=n; ++i) {
    v.at(i) = i*i*i;
  }
  auto r = solve(n,&v);
  if (r.first==-1) {
    cout << -1 << endl;
  } else {
    cout << r.first << ' ' << r.second << endl;
  }
}
