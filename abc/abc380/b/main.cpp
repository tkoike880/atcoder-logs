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
  vector<int> v;
  int c=0;
  rep (i,s.size()) {
    if (s[i] == '\0') {
      break;
    }
    if (s[i] == '|') {
      if (c>0) {
        v.push_back(c);
      }
      c=0;
    }
    if (s[i] == '-') {
      ++c;
    }
  }
  rep (i, v.size()) {
    if (i>0) {
      cout << ' ';
    }
    cout << v[i];
  }
  cout << endl;
}
