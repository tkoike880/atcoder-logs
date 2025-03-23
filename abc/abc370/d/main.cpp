#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool kabe(int r, int c, unordered_map<int, pair<int,int>> *yoko,
  unordered_map<int, pair<int,int>> *tate) {
  if (!tate->contains(r)) {
    return false;
  } else if (tate->at(r).first > c || c > tate->at(r).second) {
    return false;
  }
  if (!yoko->contains(c)) {
    return false;
  } else if (yoko->at(c).first > r || r > yoko->at(c).second) {
    return false;
  }
  return true;
}

int main() {
  int h,w,q;
  cin >> h >> w >> q;
  ll x = h*w;
  unordered_map<int, pair<int,int>> yoko;
  unordered_map<int, pair<int,int>> tate;
  rep(i,q) {
    int r,c;
    cin >> r >> c;
    pair<int,int> p = {r,c};
    if (kabe(r,c,&yoko,&tate)) {


    } else {
      tate.insert({h, {w,w}});
      yoko.insert({w, {h,h}});
      --x;
    }
  }
  cout << x << endl;
}
