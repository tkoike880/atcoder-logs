#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,d;
  cin >> n >> d;
  vector<pair<int,int>> v(n);
  rep(i,n) {
    int t,l;
    cin >> t >> l;
    v.at(i) = {t,l};
  }
  rep1(k,d) {
    int m=0;
    rep(i,n) {
      auto [t,l] = v.at(i);
      int s = t * (l+k);
      if (s>m) {
        m=s;
      }
    }
    cout << m << endl;
  }
}
