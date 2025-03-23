#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  if ((b < c && b <= a && a < c) || (c < b && !(c <= a && a < b))) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
