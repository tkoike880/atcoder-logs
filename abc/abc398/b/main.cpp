#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  map<int,int> m;
  rep(i,7) {
    int a;
    cin >> a;
    if (m.contains(a)) {
      ++m.at(a);
    } else {
      m.insert({a,1});
    }
  }
  int c2=0,c3=0;
  for (const auto& [k,v]:m) {
    if (v>=3) {
      ++c3;
      if (c3==2) {
        ++c2;
      }
      continue;
    }
    if (v>=2) {
      ++c2;
    }
  }
  cout << ((c2>0&&c3>0) ? "Yes" : "No") << endl;
}
