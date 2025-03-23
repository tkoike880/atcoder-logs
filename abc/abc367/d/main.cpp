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
  vector<int> a(n);
  vector<vector<int>> s(n);
  ll r=0;
  rep (i,n){
    int aa;
    cin >> aa;
    a.at(i) = aa % m;
  }
  vector<int> s1(n);
  rep (j,n) {
    s1.at(j) = a.at(j);
    if (a.at(j) == 0) {
      ++r;
    }
  }
  s.at(0) = s1;
  for (int i=1;i<n;++i) {
    rep(j,n) {
      vector<int> ss(n);
      rep (j,n) {
        ss.at(j) = (a.at(j) + s.at(i-1).at((j+1) % n)) % m;
        if (ss.at(j) == 0) {
          ++r;
        }
      }
      s.at(i) = ss;
    }
  }
  cout << r << endl;
}
