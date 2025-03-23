#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

double dis(pair<int,int> *a, pair<int,int> *b) {
  double dx,dy;
  dx = a->first - b->first;
  dy = a->second - b->second;
  return sqrt(dx*dx + dy*dy);
}

int main() {
  int n,s,t;
  cin >> n >> s >> t;
  vector<pair<pair<int,int>,pair<int,int>>> v(n);
  rep(i,n) {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    v.at(i) = {{a,b}, {c,d}};
  }
  vector<int> vi(n);
  rep (i,n) vi.at(i)=i;
  long double r = 0;
  do {
    rep(i, 1 << n) {
      long double rr = 0;
      pair<int,int> pp = {0,0};
      int ii = i;
      rep (j,n) {
        pair<int,int> sp = (ii & 1) ? v.at(vi.at(j)).first : v.at(vi.at(j)).second;
        pair<int,int> ep = (ii & 1) ? v.at(vi.at(j)).second : v.at(vi.at(j)).first;
        rr += dis(&sp,&pp) / (double)s;
        pp=sp;
        rr += dis(&ep,&pp) / (double)t;
        pp=ep;
        ii >>= 1;
      }
      if (r == 0.0L) {
        r = rr;
      } else {
        r = min(r,rr);
      }
    }
  } while(next_permutation(vi.begin(), vi.end()));
  cout << fixed << setprecision(16) << r << endl;
}
