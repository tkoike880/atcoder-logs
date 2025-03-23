#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  map<int,bool> mp;
  vector<int> v;
  rep(i,m) {
    int a;
    cin >> a;
    mp.insert({a,true});
  }
  rep1(i,n) {
    if (!mp.contains(i)) {
      v.push_back(i);
    }
  }
  cout << v.size() << endl;
  for (const auto& x:v) {
    cout << x << " " << endl;
  }
}
