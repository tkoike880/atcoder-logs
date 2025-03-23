#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s,t;
  cin >> s >> t;
  int ss=s.size(), st=t.size();
  int i=0, p=0;
  while (i<ss && i<st) {
    if (s.at(i) != t.at(i)) {
      p = i+1;
      break;
    }
    ++i;
  }
  if (ss != st) {
    p = i+1;
  }
  cout << p << endl;
}
