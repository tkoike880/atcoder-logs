#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  float x;
  cin >> x;
  int r;
  if (x>=38.0) {
    r=1;
  } else if (x>=37.5) {
    r=2;
  } else {
    r=3;
  }
  cout << r << endl;
}
