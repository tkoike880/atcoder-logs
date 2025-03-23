#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  vector<ll> v;
  int h=0;
  int q;
  cin >> q;
  ll s=0;
  rep(i,q) {
    int t;
    cin >> t;
    switch (t) {
      case 1:
        int l;
        cin >> l;
        s+=l;
        v.push_back(s);
        break;
      case 2:
        ++h;
        break;
      case 3:
        int k;
        cin >> k;
        --k;
        ll r;
        if (k>0) {
          if (h>0) {
            r = v.at(h+k-1) - v.at(h-1);
          } else {
            r = v.at(k-1);
          }
        } else {
          r=0;
        }
        cout << r << endl;
        break;
    }
  }
}
