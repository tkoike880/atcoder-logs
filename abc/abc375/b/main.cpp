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
  ll px=0,py=0;
  long double c=0.0l;
  rep(i,n) {
    ll x,y;
    cin >> x >> y;
    c += sqrt((px-x)*(px-x) + (py-y)*(py-y));
    px=x;
    py=y;
  }
  c += sqrt((px)*(px) + (py)*(py));
  cout << fixed << setprecision(16) << c << endl;
}
