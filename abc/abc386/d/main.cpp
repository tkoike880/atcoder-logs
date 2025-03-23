#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

void append(map<int, map<int,char>> *m, int x, int y, char c) {
  if (m->contains(x)) {
    m->at(x).insert({y,c});
  } else {
    map<int,char> mm;
    mm.insert({y,c});
    m->insert({x,mm});
  }
}

bool solve(map<int, map<int,char>> *m) {
  for (const auto& [_,mm]:*m) {
    bool white = false;
    for (const auto& [__,c]:mm) {
      if (c=='B' && white) {
        cout << _ << " " << __ << endl;
        return false;
      }
      if (c=='W') {
        white = true;
      }
    }
  }
  return true;
}

int main() {
  int n,m;
  cin >> n >> m;
  map<int, map<int,char>> mx;
  map<int, map<int,char>> my;
  rep(i,m) {
    int x,y;
    char c;
    cin >> x >> y >> c;
    append(&mx,x,y,c);
    append(&my,y,x,c);
  }
  cout << ((solve(&mx) && solve(&my))?"Yes":"No") << endl;
}
