#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int r=0;
  rep(i,n-2) {
    if (s[i] == '#' && s[i+1] == '.' && s[i+2] == '#') {
      ++r;
    }
  }
  cout << r << endl;
}
