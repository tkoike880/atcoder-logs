#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;
typedef tuple<int,int,int> triple;

int solve(int n, vector<int> *a) {
  vector<triple> v(2*n-1);
  rep(i,2*n-1) {
    auto p = a->at(i);
    auto q = a->at(i+1);
    if (p<q) {
      v.at(i) = {i,p,q};
    } else {
      v.at(i) = {i,q,p};
    }
  }
  sort(v.begin(),v.end(), [](triple a, triple b) {
    auto [a0,a1,a2] = a;
    auto [b0,b1,b2] = b;
    if (a1==b1) {
      return a2 < b2;
    }
    return a1 < b1;
  });
  int c=0;
  rep(i,2*n-2) {
    auto [a0,a1,a2] = v.at(i);
    auto [b0,b1,b2] = v.at(i+1);
    if (abs(a0-b0)<2) {
      continue;
    }
    if (abs(a0-b0)==2) {
      if (a0<b0 && a->at(a0+1)==a->at(b0)) {
        continue;
      }
      if (b0<a0 && a->at(b0+1)==a->at(a0)) {
        continue;
      }
    }
    if (a1==a2) {
      continue;
    }
    if(b1==b2) {
      continue;
    }
    if (a1==b1 && a2==b2) {
      ++c;
    }
  }
  return c;
}

int main() {
  int t;
  cin >> t;
  rep(i,t) {
    int n;
    cin >> n;
    vector<int> a(2*n);
    rep(j,2*n) {
      cin >> a.at(j);
    }
    cout << solve(n,&a) << endl;
  }
}
