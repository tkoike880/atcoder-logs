#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,d;
  cin >> n >> d;
  string s;
  cin >> s;
  vector<int> v;
  rep(i,n) {
    if (s.at(i)=='@') {
      v.push_back(i);
    }
  }
  for (int i=v.size()-d;i<v.size();++i) {
    s.at(v.at(i))='.';
  }
  cout << s << endl;
}
