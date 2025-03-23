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
  vector<vector<char>> v(n, vector<char>(n, ' '));
  rep1(i,n) {
    auto j = n+1-i;
    if (i<=j) {
      for(int p=i;p<=j;++p) {
        for(int q=i;q<=j;++q) {
          v.at(p-1).at(q-1) = (i%2!=0) ? '#' : '.';
        }
      }
    }
  }
  rep(i,n) {
    rep(j,n) {
      cout << v.at(i).at(j);
    }
    cout << endl;
  }
}
