#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string s;
  cin>>s;
  int st=s.size();
  int r=0;
  rep(i,st) {
    if ((i+r)%2==0) {
      if (s.at(i)!='i') {
        ++r;
      }
    } else {
      if (s.at(i)!='o') {
        ++r;
      }
    }
  }
  if ((st+r)%2!=0) {
    ++r;
  }
  cout << r << endl;
}
