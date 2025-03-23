#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,k;
  cin >> n >> k;
  vector<pair<int,int>> e(n-1);
  rep (i,n-1) {
    pair<int,int> p;
    cin >> p.first >> p.second;
    e.at(i) = p;
  }
  vector<int> v(k);
  rep (i,k) {
    cin >> v[i];
  }
}
