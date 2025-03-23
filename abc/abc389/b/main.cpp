#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  ll x;
  cin >> x;
  int r=0;
  rep1(i,1000) {
    x /= i;
    ++r;
    if (x==1) {
      break;
    }
  }
  cout << r << endl;
}
