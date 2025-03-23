#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,c,r=0,cc=-1001;
  cin >> n >> c;
  rep(i,n) {
    int t;
    cin >> t;
    if ((t - cc)>=c) {
      ++r;
      cc=t;
    }
  }
  cout << r << endl;
}
