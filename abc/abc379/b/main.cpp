#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  int r=0,c=0;
  rep(i,n) {
    if (s[i] == 'X') {
      c=0;
      continue;
    }
    ++c;
    if (c<k) {
      continue;
    }
    ++r;
    c=0;
  }
  cout << r << endl;
}
