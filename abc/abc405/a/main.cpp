#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int r,x;
  cin >> r >> x;
  bool b=false;
  if (1600<=r && r<=2999 && x==1) {
    b=true;
  }
  if (1200<=r && r<=2399 && x==2) {
    b=true;
  }
  cout << (b ? "Yes" : "No") << endl;
}
