#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool kaibun(string s, int n, int k) {
  for (int i=0;i<n-k+1;++i) {
    bool r = true;
    for (int j=0;j<k;++j) {
      if (s.at(i+j) != s[i+k-j-1]) {
        r = false;
        break;
      }
    }
    if (r) {
      return true;
    }
  }
  return false;
}

set<string> gen(string s, int n) {
  if (n==1) {
    return {s};
  }
  set<string> r;
  for (const auto& l:gen(s.substr(1, n-1), n-1)) {
    r.insert(s.at(0) + l);
    for (int i=1;i<n-1;++i) {
      r.insert(l.substr(0, i) + s.at(0) + l.substr(i));
    }
    r.insert(l + s.at(0));
  }
  return r;
}

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  set<string> sl = gen(s, n);
  ll c=0;
  for (const auto& ss:sl) {
    // cout << ss << endl;
    if (!kaibun(ss,n,k)) {
      ++c;
    }
  }
  cout << c << endl;
}
