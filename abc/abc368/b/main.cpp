#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,c=0;
  cin >> n;
  vector<int> a(n);
  rep (i,n) {
    cin >> a.at(i);
  }
  while (true) {
    int cc = 0;
    for (const auto& e:a) {
      if (e>0) ++cc;
    }
    if (cc<=1) {
      break;
    }
    sort(a.rbegin(), a.rend());
    --a.at(0);
    --a.at(1);
    ++c;
  }
  cout << c << endl;
}
