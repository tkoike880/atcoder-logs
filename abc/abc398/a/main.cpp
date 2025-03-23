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
   if (n%2==0) {
    rep(i,(n/2)-1) {
      cout << '-';
    }
    cout << "==";
    rep(i,(n/2)-1) {
      cout << '-';
    }
   } else {
    rep(i,n/2) {
      cout << '-';
    }
    cout << '=';
    rep(i,n/2) {
      cout << '-';
    }
   }
}
