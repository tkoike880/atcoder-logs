#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

struct Point
{
  int x;
  int y;
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }
  bool operator<(const Point& value) const
  {
    return x < value.x && y < value.y;
  }
};

void insert_or_assign(int n, map<Point,int> *e, Point p, int v) {
  if (!(1 <= p.x && p.x <= n && 1 <= p.y && p.y <= n)) {
    return;
  }
  if(!e->contains(p)) {
    e->insert({p,v});
  } else {
    int val = e->at(p);
    if(v==1) {
      if (val == 2) {
        e->erase(p);
      }
    }
  }
}

int main() {
  int n,m;
  cin >> n >> m;
  map<Point,int> e = {};
  vector<pair<int,int>> ls = {
    {1,2},
    {2,1},
    {-1,2},
    {-2,1},
    {1,-2},
    {2,-1},
    {-1,-2},
    {-2,-1},
  };
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    insert_or_assign(n, &e, Point(a,b), 2);
    for (const auto& [l,r]:ls) {
      insert_or_assign(n, &e, Point(a+l,b+r), 1);
    }
  }
  ll res = (ll)n*(ll)n;
  for (const auto& [p,v]:e) {
    if (v>0) {
      --res;
    }
  }
  cout << res << endl;
}
