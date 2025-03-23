#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,q;
  cin >> n >> q;
  int l=1,r=2,res=0;
  rep(i,q) {
    char h;
    int t;
    cin >> h >> t;
    if (h == 'L') {
      if (min(l,t) < r && r < max(l,t)) {
        res += n - abs(l-t);
      } else {
        res += abs(l-t);
      }
      l=t;
    } else {
      if (min(r,t) < l && l < max(r,t)) {
        res += n - abs(r-t);
      } else {
        res += abs(r-t);
      }
      r=t;
    }
  }
  cout << res << endl;
}
