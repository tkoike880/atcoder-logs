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
  int r=0;
  rep (i,3) {
    if (s.at(i)=='A') {
      r+=1;
    } else if (s.at(i)=='B') {
      r+=2;
    } else if (s.at(i)=='C') {
      r+=4;
    }
  }
  cout << (r==7 ? "Yes" : "No") << endl;
}
