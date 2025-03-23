#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,t,a;
  cin >> n >> t >> a;
  int r = n - a - t;
  cout << ((min(a,t) + r > max(a,t)) ? "No" : "Yes") << endl;
}
