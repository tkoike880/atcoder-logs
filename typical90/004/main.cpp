#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int h,w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  vector<int> sh(h,0);
  vector<int> sw(w,0);
  rep(i,h) {
    rep(j,w) {
      int aa;
      cin >> aa;
      a.at(i).at(j) = aa;
      sh.at(i)+=aa;
      sw.at(j)+=aa;
    }
  }
  rep(i,h) {
    rep(j,w) {
      if (j>0) {
        cout << ' ';
      }
      int r = sh.at(i) + sw.at(j) - a.at(i).at(j);
      cout << r;
    }
    cout << endl;
  }
}
