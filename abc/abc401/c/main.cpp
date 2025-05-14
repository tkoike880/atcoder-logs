#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

ll solve(int n, int k) {
  if (k>n) {
    return 1;
  }
  if (k==n) {
    return k;
  }
  list<ll> l;
  rep(i,k+1) {
    l.push_back(1);
  }
  ll s=1,e=1,t=k,mod=1000000000ll;
  rep(i,n-k+1) {
    e=t;
    l.push_back(e);
    t = (mod+t+t-s)%mod;
    l.pop_front();
    s=*l.begin();
  }
  return e;
}

int main() {
  int n,k;
  cin >> n >> k;
  cout << solve(n,k) << endl;
}
