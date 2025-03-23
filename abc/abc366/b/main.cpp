#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,m=0;
  cin >> n;
  vector<string> v(n);
  vector<int> s(n);
  rep (i,n) {
    string ss;
    cin >> ss;
    v.at(i) = ss;
    int mm = ss.size();
    s.at(i) = mm;
    if (mm > m) {
      m = mm;
    }
  }
  map<int,int> w;
  for (int i=n-1;i>=0;--i) {
    if (w.contains(s.at(i))) {
      w.at(s.at(i)) = i;
    }
    w.insert({s.at(i), i});
  }
  // for (const auto& [k,ww]:w) {
  //   cout << k << "=>" <<ww << endl;
  // }

  rep(i,m) {
    for (int j=n-1;j>=0;--j) {
      int ss = s.at(j);
      if (i < ss) {
        cout << v.at(j).at(i);
      } else if(j >= w.at(i+1)) {
        cout << "*";
      }
    }
    cout << endl;
  }
}
