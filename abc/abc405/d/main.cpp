#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

using Grid = vector<vector<char>>;
using DGrid = vector<vector<int>>;
using Open = vector<vector<bool>>;
using Point = pair<int,int>;
using DPoint = pair<Point,char>;

vector<DPoint> neibour(int h, int w, Point p) {
  vector<DPoint> v;
  v.push_back({{p.first+1, p.second}, 'v'});
  v.push_back({{p.first-1, p.second}, '^'});
  v.push_back({{p.first, p.second+1}, '>'});
  v.push_back({{p.first, p.second-1}, '<'});
  vector<DPoint> r;
  for (const auto& vv:v) {
    if (vv.first.first < 0 || h <= vv.first.first) {
      continue;
    }
    if (vv.first.second < 0 || w <= vv.first.second) {
      continue;
    }
    r.push_back(vv);
  }
  return r;
}

int main() {
  int h,w;
  cin >> h >> w;
  Grid s(h,vector<char>(w));
  DGrid d(h,vector<int>(w,-1));
  Open o(h,vector<bool>(w,true));
  queue<Point> q;
  rep(i,h) {
    rep(j,w) {
      char ss;
      cin >> ss;
      s.at(i).at(j) = ss;
      if (ss!='.') {
        o.at(i).at(j) = false;
      }
      if (ss=='E') {
        q.push({i,j});
        d.at(i).at(j) = 0;
      }
    }
  }
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    if (d.at(p.first).at(p.second)==-1) {
      int dd = INT_MAX;
      char dir='.';
      for (const auto& npd:neibour(h,w,p)) {
        auto np = npd.first;
        if (d.at(np.first).at(np.second)>=0) {
          if (d.at(np.first).at(np.second)<dd) {
            dd = d.at(np.first).at(np.second);
            dir = npd.second;
          }
        }
      }
      d.at(p.first).at(p.second) = dd+1;
      s.at(p.first).at(p.second) = dir;
    }

    for (const auto& npd:neibour(h,w,p)) {
      auto np = npd.first;
      if (o.at(np.first).at(np.second)) {
        o.at(np.first).at(np.second) = false;
        q.push(np);
      }
    }
  }

  rep(i,h) {
    rep(j,w) {
      cout << s.at(i).at(j);
    }
    cout << endl;
  }
}
