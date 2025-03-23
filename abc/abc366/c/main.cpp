#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
#define foreach(e, v) for (const auto& e : v)
#define foreach_map(k, v, m) for (const auto& [k, v] : m)
typedef long long ll;

int main() {
  int q;
  map<int, int> m;
  cin >> q;
  rep (i, q) {
    int qq, x;
    cin >> qq;
    if (qq == 1) {
      cin >> x;
      if (m.contains(x)) {
        ++m.at(x);
      } else {
        m.insert({x, 1});
      }
    } else if (qq == 2) {
      cin >> x;
      --m.at(x);
    } else {
      x = 0;
      foreach_map(k, c, m) {
        if (c>0) {
          ++x;
        }
      }
      cout << x << endl;
    }
  }
}
