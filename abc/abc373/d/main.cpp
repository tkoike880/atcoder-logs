#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

struct E {
  int u;
  int v;
  ll w;
};

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<E>> v(n, vector<E> {});

  rep(i,m) {
    E e;
    cin >> e.u >> e.v >> e.w;
    --e.u;
    --e.v;
    v.at(e.u).push_back(e);
    E ee;
    ee.u=e.v;
    ee.v=e.u;
    ee.w=-e.w;
    v.at(ee.u).push_back(ee);
  }

  vector<ll> x(n, 0);
  vector<bool> y(n, false);
  x[0] = 0;
  y[0] = true;
  rep(i,n) {
    for (const auto& e:v.at(i)) {
      if (!y.at(e.v)) {
        // v=u+w
        x.at(e.v) = x.at(e.u) + e.w;
      }
      y.at(e.v) = true;
    }
  }
  rep(i,n) {
    if (i>0) cout << " ";
    cout << x.at(i);
  }
  cout << endl;
}
