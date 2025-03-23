#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool det(ll r) {
  int c=0;
  while(r>0) {
    if (r&1) {
      ++c;
    }
    r >>= 1;
  }
  return r%1 == 0;
}

int main() {
  //s
  //st
  //stts
  //sttstsst
  //sttstssttsststts
  string s;
  cin >> s;
  int ss = s.size();
  string t = s;
  rep(i,ss) {
    if (islower(t[i])) {
      t[i] = toupper(t[i]);
    } else {
      t[i] = tolower(t[i]);
    }
  }
  int q;
  cin >> q;
  rep(i,q) {
    ll k;
    cin >> k;
    --k;
    int r = k % ss;
    if (i>0) {
      cout << ' ';
    }
    ll qq = (ll)(k / ss);
    if (det(qq)) {
      cout << s.at(r);
    } else {
      cout << t.at(r);
    }
  }
  cout << endl;
}
