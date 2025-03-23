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
  list<int> h;
  rep(i,n) {
    int hh;
    cin >> hh;
    if (hh>0) h.push_back(hh);
  }
  ll t=0;
  while (!h.empty()) {
    int e = *h.begin();
    while (e>0) {
      int rr = (int)(e/5);
      if (rr>0) {
        e -= 5*rr;
        t += 3*rr;
        continue;
      }
      ++t;
      if (t%3 ==0) {
        e -= 3;
      } else {
        --e;
      }
    }
    h.pop_front();
  }
  cout << t << endl;
}
