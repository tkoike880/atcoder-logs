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
  ll r = 2*n -1;
  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }
  // vector<pair<int,int>> v;
  int b=3;
  rep(i,n-2) {
    if ((a[i+1] - a[i]) == a[i+2] - a[i+1]) {
      ++r;
      // v.push_back({i, i+2});
      if (b>3) {
        r+=b-3;
        ++b;
      } else {
        ++b;
      }
    } else {
      b=3;
    }
  }
  cout << r << endl;
}
