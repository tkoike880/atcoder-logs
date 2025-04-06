#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

ll bin(ll n, ll b) {
  // 2^a*b^2<=n
  // b^2<=n/(2^a)
  ll bb = b*b;
  pair<int,int> aa ={0,62};
  while(true) {
    if (aa.second-aa.first<=1) {
      if (bb <= (n>>aa.second)) {
        return aa.second;
      } else {
        return aa.first;
      }
      break;
    }
    int mid = (aa.first+aa.second)/2;
    if (bb <= (n>>mid)) {
      aa={mid, aa.second};
    } else {
      aa={aa.first, mid};
    }
  }
}

int main() {
  ll n;
  cin >> n;
  ll b=1,r=0;
  while(true) {
    if (b%2==0) {
      ++b;
      continue;
    }
    ll d = bin(n,b);
    if (d==0) {
      break;
    }
    r+=d;
    ++b;
  }
  // r=1ll<<62;
  cout << r << endl;
}
