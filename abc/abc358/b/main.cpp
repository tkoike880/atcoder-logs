#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;
  vector<int> v, r;
  for (int i=0;i<n;++i) {
    int tt;
    cin >> tt;
    v.push_back(tt);
  }
  int b=0;
  for (int i=0;i<n;++i) {
    if (b <= v[i]) {
      b=v[i]+a;
      r.push_back(v[i]+a);
    } else {
      r.push_back(b+a);
      b+=a;
    }
  }

  for (const auto& rr:r)
    cout << rr << endl;
}
