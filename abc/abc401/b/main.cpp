#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  cin >> n;
  bool l=false;
  int c=0;
  rep(i,n) {
    string s;
    cin >> s;
    if (s=="login") {
      l=true;
    } else if (s=="logout") {
      l=false;
    } else if (s=="public") {
    } else {
      if (!l) ++c;
    }
  }
  cout << c << endl;
}
