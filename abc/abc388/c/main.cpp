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
  vector<int> v(n);
  map<int,int> m;
  rep1(i,n) {
    int a;
    cin >> a;
    m.insert_or_assign(a,i);
    v.at(i-1) = a;
  }
  ll r=0;
  for (const auto& b:v) {
    int a = b >> 1;
    auto it = m.upper_bound(a);
    if (it==m.begin()) {
      continue;
    }
    --it;
    r += it->second;
    // cout << b << " " << a << " " << it->first << endl;
  }
  cout << r << endl;
}
