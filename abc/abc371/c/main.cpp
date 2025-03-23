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
  vector<vector<bool>> g(n, vector<bool>(n,false));
  vector<vector<bool>> h(n, vector<bool>(n,false));
  vector<vector<int>> a(n, vector<int>(n,0));
  int mg;
  cin >> mg;
  rep(i,mg) {
    int u,v;
    cin >> u >> v;
    --u;--v;
    if (u<v) {
      g.at(u).at(v) = true;
    } else {
      g.at(v).at(u) = true;
    }
  }
  int mh;
  cin >> mh;
  rep(i,mh) {
    int u,v;
    cin >> u >> v;
    --u;--v;
    if (u<v) {
      h.at(u).at(v) = true;
    } else {
      h.at(v).at(u) = true;
    }
  }
  ll r=0;
  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      cin >> a.at(i).at(j);
      r += a.at(i).at(j);
    }
  }
  vector<int> p(n);
  rep(i,n) {
    p[i] = i;
  }
  do {
    ll rr=0;
    for (int i = 0; i < n; ++i) {
      for (int j = i+1; j < n; ++j) {
        int ii,jj;
        if (p.at(i)<p.at(j)) {
          ii = p.at(i);
          jj = p.at(j);
        } else {
          ii = p.at(j);
          jj = p.at(i);
        }
        if (g.at(i).at(j) != h.at(ii).at(jj)) {
          rr += a.at(ii).at(jj);
        }
      }
    }
    if (rr<r) {
      r=rr;
    }
  } while(next_permutation(p.begin(), p.end()));
  cout << r << endl;
}
