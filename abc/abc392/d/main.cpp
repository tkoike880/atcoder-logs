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
  vector<int> k(n);
  vector<vector<int>> a(n);
  rep(i,n) {
    int kk;
    cin >> kk;
    k.at(i) = kk;
    vector<int> aa(kk);
    rep(j,kk) {
      cin >> aa.at(j);
    }
    sort(aa.begin(), aa.end());
    a.at(i) = aa;
  }
  double r=0.0;
  rep(i,n) {
    for (int j=i+1;j<n;++j) {
      int rrr=0;
      map<int,int> m1;
      map<int,int> m2;
      for (const auto& e:a.at(i)) {
        if (!m1.contains(e)) {
          m1.insert({e,1});
        } else {
          ++m1.at(e);
        }
      }
      for (const auto& e:a.at(j)) {
        if (!m2.contains(e)) {
          m2.insert({e,1});
        } else {
          ++m2.at(e);
        }
      }
      for (const auto& [key,val]:m1) {
        if (m2.contains(key)) {
          rrr += val * m2.at(key);
        }
      }
      // cout << rrr << endl;
      double rr = (double)(rrr) / (double)(k.at(i) * k.at(j));
      // cout << rr << endl;
      if (rr > r) {
        r = rr;
      }
    }
  }
  cout << setprecision(10) << fixed << r << endl;
}
