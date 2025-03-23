#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s1;
  string s2;
  cin >> s1 >> s2;
  int r=0;
  if (s1 == "sick") {
    if (s2 == "sick") {
      r=1;
    } else {
      r=2;
    }
  } else {
    if (s2 == "sick") {
      r = 3;
    } else {
      r = 4;
    }
  }
  cout << r << endl;
}
