#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0), w(n, 0), v(n, -1), r;
  for (int i=0;i<n;++i) {
    int aa;
    cin >> aa;
    a[i] = aa - 1;
  }
  for (int i=0;i<n;++i) {
    int ww;
    cin >> ww;
    w[i] = ww;
  }
  for (int i=0;i<n;++i) {
    if (v[a[i]] < 0) {
      v[a[i]] = i;
    } else {
      if (w[v[a[i]]] < w[i]) {
        r.push_back(v[a[i]]);
        v[a[i]] = i;
      } else {
        r.push_back(i);
      }
    }
  }
  int s=0;
  for (const auto& rr:r) {
    s += w[rr];
  }
  cout << s << endl;
}
