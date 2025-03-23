#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> b(n,0),w(m,0);
  rep(i,n) {
    cin >> b.at(i);
  }
  rep(j,m) {
    cin >> w.at(j);
  }
  sort(b.begin(), b.end());
  sort(w.begin(), w.end());
  int bc=0,wc=0;
  vector<int> dp(n+m+1, INT_MIN);
  dp.at(0)=0;
  dp.at(1) = *b.rbegin();
  ++bc;
  for (int i=2; i<n+m+1; ++i) {
    if (bc>=n) {
      if (bc <= wc) {
        break;
      }
      dp.at(i) = dp.at(i-1) + w.at(m-1-wc);
      ++wc;
      continue;
    }
    if (wc>=m) {
      dp.at(i) = dp.at(i-1) + b.at(n-1-bc);
      ++bc;
      continue;
    }
    if (bc <= wc) {
      dp.at(i) = dp.at(i-1) + b.at(n-1-bc);
      ++bc;
    } else {
      auto bb = b.at(n-1-bc);
      auto ww = w.at(m-1-wc);
      if (ww>bb) {
        dp.at(i) = dp.at(i-1) + ww;
        ++wc;
      } else {
        dp.at(i) = dp.at(i-1) + bb;
        ++bc;
      }
    }
  }

  int max=0;
  rep(i,n+m+1) {
    // cout << dp.at(i) <<endl;
    if (dp.at(i)>max) {
      max = dp.at(i);
    }
  }
  cout << max << endl;
}
