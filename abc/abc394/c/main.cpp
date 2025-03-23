#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s;
  cin >> s;
  vector<int> v;
  rep(i,s.size()-1) {
    if (s.at(i) == 'W' && s.at(i+1) == 'A') {
      v.push_back(i);
    }
  }
  int j=0;
  while(j < (int)v.size()) {
    auto i = v.at(j);
    s.at(i) = 'A';
    s.at(i+1) = 'C';
    if (i>0 && s.at(i-1) == 'W') {
      --v.at(j);
      continue;
    }
    ++j;
  }
  cout << s << endl;
}
