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
  int c=0;
  for (int i=s.size()-1;i>=0;--i) {
    if ((s.at(i)-48)>0) {
      ++c;
      continue;
    }
    if (i>0 && s.at(i-1)=='0') {
      ++c;
      --i;
    } else {
      ++c;
    }
  }
  cout << c << endl;
}
