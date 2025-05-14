#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s;
  cin >> s;
  rep(i,26) {
    char c = (char)(97+i);
    bool f=false;
    rep(j,s.size()) {
      if (s.at(j)==c) {
        f=true;
        break;
      }
    }
    if (f) {
      continue;
    } else {
      cout << c << endl;
      break;
    }
  }
}
