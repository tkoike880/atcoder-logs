#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

void append(map<int,map<int,bool>> *m, int r, int c) {
  if (!m->contains(r)) {
    map<int,bool> mm;
    mm.insert({c,true});
    m->insert({r,mm});
  } else {
    if (!m->at(r).contains(c)) {
      m->at(r).insert({c,true});
    }
  }
}

bool exists(map<int,map<int,bool>> *m, int r, int c) {
  if (!m->contains(r)) {
    return false;
  }
  return m->at(r).contains(c);
}

int main() {
  int n,r,c;
  string s;
  cin >> n >> r >> c;
  cin >> s;
  int ss = s.size();
  map<int,map<int,bool>> m;
  pair<int,int> zpos={0,0};
  pair<int,int> ppos={r,c};
  append(&m,0,0);
  rep(i,ss) {
    switch (s.at(i))
    {
      case 'N':
        ++zpos.first;
        ++ppos.first;
        break;
      case 'W':
        ++zpos.second;
        ++ppos.second;
        break;
      case 'S':
        --zpos.first;
        --ppos.first;
        break;
      case 'E':
        --zpos.second;
        --ppos.second;
        break;
    }
    append(&m,zpos.first,zpos.second);
    cout << (exists(&m, ppos.first, ppos.second) ? 1 : 0);
  }
}
