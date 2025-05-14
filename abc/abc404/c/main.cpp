#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool solve() {
  int n,m;
  cin >> n >> m;
  if (n!=m) {
    return false;
  }

  vector<int> v(n,0);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    ++v.at(a-1);
    ++v.at(b-1);
  }
  rep(i,n) {
    if (v.at(i)!=2) {
      return false;
    }
  }
  return true;
}

int main() {
  cout << (solve() ? "Yes" : "No") << endl;
}
