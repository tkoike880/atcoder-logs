#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  ll s=0,d=0;
  rep(i,n) {
    cin >> a.at(i);
    s+=a.at(i);
    d+=a.at(i)*a.at(i);
  }
  cout << ((s*s-d)/2) << endl;
}
