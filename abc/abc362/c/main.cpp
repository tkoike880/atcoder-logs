#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<pair<int,int>> v(n);
  ll sl=0,sr=0;
  for (int i=0;i<n;++i) {
    int l,r;
    cin >> l >> r;
    sl += l;
    sr += r;
    v[i] = {l, r};
  }
  if (sl > 0 || 0 > sr) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  ll d = -sl;
  vector<int> x(n);
  for (int i=0;i<n;++i) {
    ll len = v[i].second - v[i].first;
    if (len <= d) {
      x[i] = v[i].second;
      d -= len;
    } else {
      x[i] = v[i].first + d;
      d=0;
    }
  }
  for (int i=0;i<n;++i) {
    cout << (x[i]) << " ";
  }
}
