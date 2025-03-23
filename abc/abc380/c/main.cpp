#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,k;
  cin >> n >> k;
  char cur=' ', c=0;
  vector<pair<char,int>> v;
  rep(i,n) {
    char si;
    cin >> si;
    if (i==0) {
      cur = si;
      c=1;
      continue;
    }
    if (si != cur) {
      v.push_back({cur, c});
      cur = si;
      c=1;
      continue;
    }
    ++c;
  }
  v.push_back({cur, c});
  --k;
  if (v.at(0).first == '0') {
    pair<char,int> t;
    t = v.at(2*k+1);
    v.at(2*k+1) = v.at(2*k);
    v.at(2*k) = t;
  } else {
    pair<char,int> t;
    t = v.at(2*k);
    v.at(2*k) = v.at(2*k-1);
    v.at(2*k-1) = t;
  }
  for (const auto& [ch,co]:v) {
    rep (i,co) {
      cout << ch;
    }
  }
  cout << endl;
}
