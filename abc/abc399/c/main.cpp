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
  vector<pair<int,int>> e(m);
  rep(i,m) {
     int u,v;
     cin >> u >> v;
     if (u<v) {
      e.at(i) = {u,v};
     } else {
      e.at(i) = {v,u};
     }
  }
  sort(e.begin(),e.end(), [](pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) {
      return a.second < b.second;
    }
    return a.first < b.first;
  });
  unordered_map<int,bool> mm;
  int c=0;
  rep(i,m) {
    auto [u,v] = e.at(i);
    if (mm.contains(u) && mm.contains(v)) {
      ++c;
      continue;
    }
    mm.insert_or_assign(u,true);
    mm.insert_or_assign(v,true);
  }
  cout << c << endl;
}
