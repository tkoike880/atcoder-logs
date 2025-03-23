#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  char sab,sac,sbc,r;
  cin >> sab >> sac >> sbc;
  if (sab == '<') {
    // a < b
    if (sbc == '<') {
      // b < c
      r = 'B';
    } else {
      // c < b
      if (sac == '<') {
        // a < c
        r = 'C';
      } else {
        // c < a
        r = 'A';
      }
    }
  } else {
    // b < a
    if (sac == '<') {
      // a < c
      r = 'A';
    } else {
      // c < a
      if (sbc == '<') {
        // b < c
        r = 'C';
      } else {
        // c < b
        r = 'B';
      }
    }
  }
  cout << r << endl;
}
