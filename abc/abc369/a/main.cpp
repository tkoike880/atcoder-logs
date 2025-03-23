#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int a,b;
  int r;
  cin >> a >> b;
  if (a==b) {
    r= 1;
  } else if ((a-b) % 2 ==0) {
    r = 3;
  } else {
    r=2;
  }
  cout << r << endl;
}
