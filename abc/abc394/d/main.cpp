#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool solve() {
  string s;
  cin >> s;
  stack<char> stk;

  rep(i,s.size()) {
    auto c = s.at(i);
    if (c == ')') {
      c = '(';
    } else if (c == ']') {
      c = '[';
    } else if (c == '>') {
      c = '<';
    } else {
      stk.push(c);
      continue;
    }
    if (stk.empty()) {
      return false;
    }
    auto cur = stk.top();
    stk.pop();
    if (c != cur) {
      return false;
    }
    continue;
  }

  return stk.empty();
}

int main() {
  cout << (solve() ? "Yes" : "No") << endl;
}
