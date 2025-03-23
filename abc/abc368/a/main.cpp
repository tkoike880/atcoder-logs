#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  rep (i,n) {
    cin >> a.at(i);
  }
  for (int i=n-k;i<n;++i) {
    cout << a[i] << " ";
  }
  rep (i, n-k) {
    cout << a[i] << " ";
  }
}
