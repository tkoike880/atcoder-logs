#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int y;
  cin >> y;
  bool l = false;
  if (y % 4 == 0) {
    l = true;
  }
  if (y % 100 == 0) {
    l = false;
  }
  if (y % 400 == 0) {
    l = true;
  }
  cout << (l ? 366: 365) << endl;
}
