#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

ll solve(ll x, ll y) {
  if (x > 0 && y > 0) {
    if (y >= x) {
      return x + solve(0, y - x);
    } else {
      return y + solve(x - y, 0);
    }
  }
  if (y>0) {
    return y;
  }
  if (x>0) {
    return (x >> 1);
  }
  return 0;
}

int main() {
  ll sx,sy,tx,ty;
  cin >> sx >> sy >> tx >> ty;
  ll r;
  if (tx >= sx) {
    // sx, sy, tx, ty
    if ((sx + sy) % 2 == 0) {
      // start is left
      r = solve(tx - sx, abs(ty - sy));
    } else {
      // start is right
      r = solve(tx - sx + 1, abs(ty - sy));
    }
  } else {
    // tx, ty, sx, sy
    if ((tx + ty) % 2 == 0) {
      r = solve(sx - tx, abs(sy - ty));
    } else {
      r = solve(sx - tx + 1, abs(sy - ty));
    }
  }
  cout << r << endl;
}
