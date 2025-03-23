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
  int ma = INT_MIN, mb = INT_MIN;
  rep (i,n) {
    int a;
    cin >> a;
    if (a>ma) {
      ma = a;
    }
  }
    rep (i,n) {
    int b;
    cin >> b;
    if (b>mb) {
      mb = b;
    }
  }
  cout << (ma+mb) << endl;
}
