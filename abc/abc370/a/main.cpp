#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int l,r;
  cin >> l >> r;
  if (l == r) {
    cout << "Invalid" << endl;
    return 0;
  }
  if (l == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
