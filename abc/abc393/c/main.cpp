#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool append(map<int,map<int,bool>> *m, int a, int b) {
  if (a>b) {
    return append(m,b,a);
  }
  if (m->contains(a)) {
    if (m->at(a).contains(b)) {
      return false;
    } else {
      m->at(a).insert({b,true});
    }
  } else {
    map<int,bool> m2;
    m2.insert({b,true});
    m->insert({a, m2});
  }
  return true;
}

int main() {
  int n,m;
  cin >> n >> m;
  map<int,map<int,bool>> mp;
  int r=0;
  rep(i,m) {
    int u,v;
    cin >> u >> v;
    if (u == v || !append(&mp,u,v)) {
      // cout << u << "," << v << endl;
      ++r;
    }
  }
  cout << r << endl;
}
