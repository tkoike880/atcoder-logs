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
  vector<int> k(n);
  rep (i,n) {
    cin >> k.at(i);
  }
  int m = 1 << n, r=INT_MAX;
  rep(i,m) {
    int a=0,b=0;
    int mm = i;
    rep (j,n) {
      if (mm & 1) {
        a += k.at(j);
      } else {
        b += k.at(j);
      }
      mm >>= 1;
    }
    r = min(r, max(a,b));
  }
  cout << r << endl;
}
