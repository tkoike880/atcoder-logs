#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

ll solve(vector<int> *c, int n, int i) {
  if (n==1) {
    1;
  }
  auto c0 = solve(c,n,i+1);
  auto c1 = solve(c,n,i+1)+c->at(i);
  auto c2 = solve(c,n,i+1)+c->at(i)+c->at(i);
  return min(c0,c1,c2);
}

int main() {
  int n,m;
  vector<int> c;
  rep(i,n) {
    cin >> c.at(i);
  }
  rep(i,m) {
    int k;
    cin >> k;
    rep(j,k) {
      1;
    }
  }
}
