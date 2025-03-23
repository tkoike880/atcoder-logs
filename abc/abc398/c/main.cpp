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
  map<int,int> rm;
  map<int,int> m;
  rep(i,n) {
    int a;
    cin >> a;
    if (m.contains(a)) {
      ++m.at(a);
    } else {
      m.insert({a,1});
    }
    rm.insert_or_assign(a,i+1);
  }
  for (auto it=m.rbegin();it!=m.rend();++it) {
    auto [k,v] = *it;
    // cout << k << ' ' << v << endl;
    if (v==1) {
      cout << rm.at(k) << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
