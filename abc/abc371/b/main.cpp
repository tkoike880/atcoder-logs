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
  vector<int> v(n,0);
  rep (i,m) {
    int a;
    char b;
    cin >> a >> b;
    if (b == 'M' && v.at(a-1) == 0) {
      cout << "Yes" << endl;
      ++v.at(a-1);
    } else {
      cout << "No" << endl;
    }
  }
}
