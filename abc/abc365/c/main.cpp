#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool calc(int n, ll m, vector<int> a, int x) {
  ll ss=0;
  rep (i, n) {
    ss+=min(a.at(i), x);
  }
  return m >= ss;
}

int main() {
  int n,x,ma=0;
  ll m, s=0;
  cin >> n >> m;
  vector<int> a(n);
  rep (i, n) {
    int aa;
    cin >> aa;
    a[i] = aa;
    s+=aa;
    if (aa > ma) {
      ma = aa;
    }
  }
  if (m >= s) {
    cout << "infinite" << endl;
    return 0;
  }
  x = s / n;
  pair<int,int> p = {0, ma};
  while (p.first < p.second) {
    if (calc(n,m,a,x)) {
      p.first = x;
    } else {
      p.second = x + 1;
    }
    int xx;
    xx = (p.first + p.second) >> 1;
    if (x == xx) {
      break;
    }
    x = xx;
  }
  if (p.first == p.second) {
    cout << p.first << endl;
    return 0;
  }
  if (calc(n,m,a,p.second)) {
    cout << p.second << endl;
  } else {
    cout << p.first << endl;
  }
}
