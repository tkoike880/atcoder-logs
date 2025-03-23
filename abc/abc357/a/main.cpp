#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var

int main() {
  int n, m, r=0;
  cin >> n >> m;
  rep(i,n) {
    defin(int, h);
    if (m < h) {
      break;
    }
    m -= h;
    ++r;
  }
  cout << r << endl;
}
