#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  string s,t;
  cin >> n >> s >> t;
  int c=0;
  rep(i,n) {
    if (s.at(i) != t.at(i)) {
      ++c;
    }
  }
  cout << c << endl;
}
