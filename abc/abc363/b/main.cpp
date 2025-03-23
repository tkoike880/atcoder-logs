#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,t,p;
  cin >> n >> t >> p;
  vector<int> l(n);
  for (int i=0;i<n;++i) {
    cin >> l[i];
  }
  int d = 0;
  for (int i=0;i<=t;++i) {
    int c=0;
    for (int j=0;j<n;++j) {
      if (l[j]+d >= t) ++c;
    }
    if (c>=p) {
      break;
    }
    ++d;
  }
  cout << d << endl;
}
