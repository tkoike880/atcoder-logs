#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  int max=1000000000;
  ll x=0,nn=1;
  repe(i,m) {
    if(i==0) {
      x+=1;
      continue;
    }
    nn*=n;
    x+=nn;
    if (x>max) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << x << endl;
}
