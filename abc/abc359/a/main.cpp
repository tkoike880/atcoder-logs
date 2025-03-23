#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var

int main() {
  int n;
  cin >> n;
  int r=0;
  rep (i, n) {
    string s;
    cin >> s;
    if (s == "Takahashi") {
      ++r;
    }
  }
  cout << r << endl;
}
