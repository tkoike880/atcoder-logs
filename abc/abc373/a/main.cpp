#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int r=0;
  rep1(i,12) {
    string s;
    cin >> s;
    if (s.size()==i) {
      ++r;
    }
  }
  cout << r << endl;
}
