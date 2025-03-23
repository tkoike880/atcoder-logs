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
  vector<string> v(n);
  rep(i,n) {
     cin >> v.at(i);
  }
  sort(v.begin(), v.end(), [](string a, string b) {
    return a.size() < b.size();
  });
  rep(i,n) {
    cout << v.at(i);
  }
  cout << endl;
}
