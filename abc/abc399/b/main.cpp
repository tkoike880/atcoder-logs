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
  vector<int> p(n),v(n);
  rep(i,n) {
    cin >> p.at(i);
    v.at(i) = p.at(i);
  }
  int r=1;
  sort(v.rbegin(), v.rend());
  int x=0,pi=0;;
  map<int,int> m;
  rep (i,n) {
    if (x==0) {
      x=v.at(i);
    }
    if (x!=v.at(i)) {
      m.insert({x,r});
      r+=i-pi;
      x=v.at(i);
      pi=i;
    }
  }
  if (!m.contains(x)) {
    m.insert({x,r});
  }
  rep(i,n) {
    cout << (m.at(p.at(i))) << endl;
  }
}
