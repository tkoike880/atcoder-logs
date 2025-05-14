#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool test(int m, list<int> *a) {
  map<int,bool> mp;
  for (const auto& aa:*a) {
    mp.insert({aa,true});
  }
  return mp.size() == m;
}

int solve() {
  int n,m;
  cin >> n >> m;
  list<int> a;
  rep(i,n) {
    int aa;
    cin >> aa;
    a.push_back(aa);
  }
  if (!test(m,&a)) {
    return 0;
  }
  int r=0;
  rep(i,n) {
    a.pop_back();
    ++r;
    if (!test(m,&a)) {
      return r;
    }
  }
  return r;
}

int main() {
  cout << solve() << endl;
}
