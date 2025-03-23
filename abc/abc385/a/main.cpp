#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool solve(int a, int b, int c) {
  if (a==b && b == c) return true;
  if (a+b == c) return true;
  if (c+b == a) return true;
  if (a+c == b) return true;
  return false;
}

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  cout << (solve(a,b,c)?"Yes":"No") << endl;
}
