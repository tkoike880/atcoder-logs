#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  map<int,int> m1;
  rep1 (i,n) {
    int a;
    cin >> a;
    if (m1.empty() || (a < m1.begin()->first)) {
      m1.insert({a, i});
    }
  }
  // for(const auto& [a,i]:m1) {
  //   cout << "{" << a << "," << i << "}" << endl;
  // }
  rep(i,m) {
    int b;
    cin >> b;
    auto it = m1.lower_bound(b);
    // cout << it->first << endl;
    if (it==m1.end()) {
      cout << m1.rbegin()->second << endl;
      continue;
    }
    if (it==m1.begin() && b < it->first) {
      cout << -1 << endl;
      continue;
    }
    cout << it->second << endl;
  }
}
