#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,r;
  cin >> n >> r;
  rep(i,n) {
    int d,a;
    cin >> d >> a;
    if (d==1 && 1600 <= r && r <= 2799) {
      r += a;
    }
    if (d==2 && 1200 <= r && r <= 2399) {
      r += a;
    }
  }
  cout << r << endl;
}
