#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  vector<int> v(4);
  rep(i,4) {
    cin >> v[i];
  }
  map<int,int> m;
  for(const auto vv:v) {
    if (m.contains(vv)) {
      ++m.at(vv);
    } else {
      m.insert({vv,1});
    }
  }
  cout << (m.size() == 2 ? "Yes" : "No") << endl;
}
