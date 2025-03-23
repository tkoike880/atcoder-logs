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
  vector<int> a(n);
  rep(i,n) {
    cin >> a.at(i);
  }
  set<int> st1;
  vector<int> s(n);
  rep(i,n) {
    st1.insert(a.at(i));
    s.at(i) = st1.size();
  }
  set<int> st2;
  vector<int> sr(n);
  rep(i,n) {
    st2.insert(a.at(n-1-i));
    sr.at(n-1-i) = st2.size();
  }
  int r=0;
  for (int i=1;i<n;++i) {
    int t = s.at(i-1) + sr.at(i);
    if (t>r) {
      r=t;
    }
  }
  cout << r << endl;
}
