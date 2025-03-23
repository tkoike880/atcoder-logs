#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

void swapa(vector<vector<char>> *a, int n, int x, int y) {
  char t = a->at(y-1).at(n-x);
  a->at(y-1).at(n-x) = a->at(x-1).at(y-1);
  a->at(x-1).at(y-1) = t;
}

int main() {
  int n;
  cin >> n;
  vector<vector<char>> a(n, vector<char>(n));
  rep(i,n) {
    rep(j,n) {
      cin >> a.at(i).at(j);
    }
  }
  for (int i=1;i<=(n>>1);++i) {
    for (int x=i;x<=n+1-i;++x) {
      for(int y=i;y<=n+1-i;++y) {
        swapa(&a,n,x,y);
      }
    }
  }
  rep(i,n) {
    rep(j,n) {
      cout << a.at(i).at(j);
    }
    cout << endl;
  }
}
