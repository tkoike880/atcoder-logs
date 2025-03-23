#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var


int main() {
  int n, n2;
  cin >> n;
  n2 = 2 * n;
  vector<int> a(n2);
  rep(i, n2) {
    int aa;
    cin >> aa;
    a.at(i) = aa;
  }
  int r=0;
  rep(i, n2 - 2) {
    if (a[i] == a[i+2]) {
      ++r;
    }
  }
  cout << r << endl;
}
