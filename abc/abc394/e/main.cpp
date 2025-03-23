#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int solve(int n, map<int,map<int,char>> *c, vector<vector<int>> *dp, int i, int j) {
  if (i==j) {
    dp->at(i).at(j) = 0;
    return 0;
  }
  // if (c->at(i).at(j) != '-') {
  //   dp->at(i).at(j) = 1;
  //   return 1;
  // }
  if (dp->at(i).at(j)>=0) {
    return dp->at(i).at(j);
  }
  int min = INT_MAX;
  rep(k,n) {
    if (c->at(i).at(k) == '-') {
      continue;
    }
    rep(l,n) {
      if (c->at(j).at(k) == '-') {
        continue;
      }
      if (c->at(j).at(k) != c->at(i).at(k)) {
        continue;
      }
      if (i==k && j==l) {
        continue;
      }
      auto ret = solve(n, c, dp, k, l);
      dp->at(k).at(l) = ret;
      if (ret>=0 && ret+2<min) {
        min = ret+2;
      }
    }
  }
  if (min!=INT_MAX) {
    dp->at(i).at(j) = min;
    return min;
  }
  return -1;
}

int main() {
  int n;
  cin >> n;
  map<int,map<int,char>> c;
  rep(i,n) {
    map<int,char> m;
    rep(j,n) {
      char cc;
      cin >> cc;
      m.insert({j,cc});
    }
    c.insert({i, m});
  }
  vector<vector<int>> dp(n, vector<int>(n,-1));
  rep(i,n) {
    rep(j,n) {
      if (j>0) {
        cout << ' ';
      }
      cout << solve(n, &c, &dp, i, j);
    }
    cout << endl;
  }
}
