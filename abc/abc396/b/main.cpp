#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int q;
  cin >> q;
  stack<int> s;
  rep(i,100) {
    s.push(0);
  }
  rep(i,q) {
    int t;
    cin >> t;
    if (t==1) {
      int x;
      cin >> x;
      s.push(x);
      continue;
    }
    if (t==2) {
      cout << s.top() << endl;
      s.pop();
      continue;
    }
  }
}
