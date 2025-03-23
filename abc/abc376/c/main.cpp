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
  vector<int> a(n),b(n-1);
  rep(i,n) {
    cin >> a[i];
  }
  rep(i,n-1) {
    cin >> b[i];
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  int unsigned i=0,j=0;
  int x=-2;
  while(i<a.size() && j<b.size()) {
    if (a.at(i)<=b.at(j)) {
      i++;j++;
      continue;
    }
    if (x==-2) {
      x=a.at(i);
      ++i;
      continue;
    }
    x=-1;
    break;
  }
  if (x==-2) {
    x = a.at(n-1);
  }
  cout << x << endl;
}
