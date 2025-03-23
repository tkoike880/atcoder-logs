#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

void solve(int n,int k, int ii, ll r, vector<ll> *a, ll *max) {
  if (k==1) {
    for (int i=ii;i<n;++i) {
      ll rr = r ^ a->at(i);
      if (rr>*max) *max=rr;
    }
    return;
  }
  for (int i=ii;i<n;++i) {
    solve(n,k-1,ii+1,r ^ a->at(i),a,max);
  }
}

int main() {
  int n,k;
  cin >> n >> k;
  vector<ll> a(n);
  ll r=0;
  rep(i,n) {
    cin >> a.at(i);
    r ^= a.at(i);
  }
  ll max = 0;
  if (n-k >= k) {
    solve(n,k,0,0,&a,&max);
  } else {
    solve(n,n-k,0,r,&a,&max);
  }
  cout << max << endl;
}
