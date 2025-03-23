#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,l=0,r=0,c=0;
  cin >> n;
  rep (i,n) {
    int a;
    char s;
    cin >> a >> s;
    if (s == 'L') {
      if (l>0) c += abs(l - a);
      l = a;
    } else {
      if (r>0) c += abs(r - a);
      r = a;
    }
  }
  cout << c << endl;
}
