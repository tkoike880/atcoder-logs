#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,k;
  string s;
  cin >> n >> k >> s;
  int c1=0,c2=0;
  rep(i,n) {
    if (s.at(i)=='?') {
      if (i==0 && s.at(i+1)=='o') {
        s.at(i)='.';
      }
      if (i==n-1 && s.at(i-1)=='o') {
        s.at(i)='.';
      }
      if ((0<i&&i<n-1) && (s.at(i-1)=='o' || s.at(i+1)=='o')) {
        s.at(i)='.';
      }
    }
    if (s.at(i)=='o') {
      ++c1;
    }
    if (s.at(i)=='?') {
      ++c2;
    }
  }
  int c3=k-c1;
  if (c3<=0) {
    rep(i,n) {
      if (s.at(i)=='?') {
        s.at(i)='.';
      }
    }
    cout << s << endl;
    return 0;
  }
  if (c3==c2) {
    rep(i,n) {
      if (s.at(i)=='?') {
        s.at(i)='o';
      }
    }
    cout << s << endl;
    return 0;
  }
  cout << s << endl;
}
