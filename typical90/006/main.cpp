#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,k;
  string s,ms;
  cin >> n >> k >> s;
  string dp;
  rep(i,n-k+1) {
    if (i==0) {
      dp = s.substr(0,k);
      continue;
    }
    string nxt = dp + s.at(i+k-1);
    bool f=false;
    rep(j,k) {
      if (nxt.at(j+1) < nxt.at(j)) {
        nxt.erase(j,1);
        f=true;
        break;
      }
    }
    if (f) {
      dp = nxt;
    }
  }
  cout << dp << endl;
}
