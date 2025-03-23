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
  int p=0,c=0;
  bool f=false;
  rep(i,n) {
    int a;
    cin >> a;
    if (p==a) {
      ++c;
    } else {
      c=1;
    }
    p=a;
    if (c==3) {
      f=true;
      break;
    }
  }
  cout << (f ? "Yes" : "No") << endl;
}
