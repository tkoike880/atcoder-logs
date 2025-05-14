#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

vector<vector<bool>> rot(int n, vector<vector<bool>> *s) {
  vector<vector<bool>> t(n, vector<bool>(n));
  rep(i,n) {
    rep(j,n) {
      t.at(j).at(n-1-i) = s->at(i).at(j);
    }
  }
  return t;
}

int comp(int n, vector<vector<bool>> *s,  vector<vector<bool>> *t) {
  int r=0;
  rep (i,n) {
    rep (j,n) {
      if (s->at(i).at(j) != t->at(i).at(j)) {
        ++r;
      }
    }
  }
  return r;
}

int main() {
  int n;
  cin >> n;
  vector<vector<bool>> s(n, vector<bool>(n)), t(n, vector<bool>(n));
  rep(i,n) {
    rep(j,n) {
      char c;
      cin >> c;
      s.at(i).at(j) = c=='#';
    }
  }
  rep(i,n) {
    rep(j,n) {
      char c;
      cin >> c;
      t.at(i).at(j) = c=='#';
    }
  }
  int c=0;
  auto ss=s;
  rep1(i,3) {
    ss = rot(n, &ss);
    if (comp(n,&ss,&t) < comp(n,&s,&t)) {
      s=ss;
      c=i;
    }
  }
  cout << c+comp(n,&s,&t) << endl;
}
