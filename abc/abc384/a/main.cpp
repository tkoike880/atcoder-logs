#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  char c1,c2;
  string s;
  cin >> n >> c1 >> c2;
  cin >> s;
  rep(i,n) {
    if (s[i] != c1) {
      s[i] = c2;
    }
  }
  cout << s << endl;
}
