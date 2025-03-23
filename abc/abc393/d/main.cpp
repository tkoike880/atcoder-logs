#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int l=-1,r=-1;
  list<int> pv;
  rep(i,n) {
    if (s.at(i) == '1') {
      if (l<0) {
        l = i;
      }
      r = i;
    }
  }
  for (int i=l;i<=r;++i) {
    if (s.at(i) == '0') {
      pv.push_back(i);
    }
  }
  if (pv.size() == 0) {
    cout << 0 << endl;
    return 0;
  }
  ll res=0;
  int pc;
  while (pv.size()>0) {
    pc=0;
    for (auto it=pv.begin();it!=pv.end();++it) {
      auto p = *it;
      if ((p-l) < (r-p)) {
        // left
        res += p-l;
        ++l;
        ++pc;
      } else {
        break;
      }
    }
    rep(i,pc) {
      pv.pop_front();
    }
    pc=0;
    for (auto it=pv.rbegin();it!=pv.rend();++it) {
      auto p = *it;
      if ((p-l) < (r-p)) {
        break;
      } else {
        // right
        res += r-p;
        --r;
        ++pc;
      }
    }
    rep(i,pc) {
      pv.pop_back();
    }
  }
  cout << res << endl;
}
