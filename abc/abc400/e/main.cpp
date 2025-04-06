#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

ll solve(ll a) {
  int aa = (int)sqrt(a);
  int aaa = (int)sqrt(aa);
  ll r=aa;
  for (;r>0;--r) {
    ll rr=r;
    int c=0;
    bool f=false;
    rep1(i,aaa) {
      if (i==1) continue;
      if (c>2) {
        break;
      }
      if (rr==1) {
        f=true;
        break;
      }
      if (rr%i==0) {
        while (rr%i==0) {
          rr/=i;
        }
        ++c;
      }
    }
    if (f && c==2) {
      return r*r;
    }
  }
  return 0;
}

int main() {
  int q;
  cin >> q;
  rep(i,q) {
    ll a;
    cin >> a;
    cout << solve(a) << endl;
  }
}
