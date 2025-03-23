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
  vector<vector<int>> v;
  repe(i,n) {
    vector<int> vv = {0};
    rep(j,i) {
      int vvv;
      cin >> vvv;
      vv.push_back(vvv);
    }
    v.push_back(vv);
  }
  int a = 1;
  rep1(i,n) {
    if (i<a) {
      a = v.at(a).at(i);
    } else {
      a = v.at(i).at(a);
    }
  }
  cout << a << endl;
}
