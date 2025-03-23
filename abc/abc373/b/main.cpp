#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s, os="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cin >> s;
  int pp=0,r=0;
  rep(i,os.size()) {
    int p = s.find(os.at(i));
    if (i>0) {
      r += abs(p - pp);
    }
    pp=p;
  }
  cout << r << endl;
}
