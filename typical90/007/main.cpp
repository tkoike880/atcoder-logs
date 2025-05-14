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
  vector<int> a(n);
  rep(i,n) {
    cin >> a.at(i);
  }
  map<int,int> m;
  for (int i=1;i<n;++i) {
    int med=(a.at(i-1)+a.at(i)+1)>>1;
    m.insert({med, i-1});
  }
  int q;
  cin >> q;
  rep(i,q) {
    int b;
    cin >> b;
    auto it = m.lower_bound(b);
    cout << abs(b-a.at(it->second)) << endl;
  }
}
