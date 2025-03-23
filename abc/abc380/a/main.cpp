#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  string n;
  int c1=0,c2=0,c3=0;
  cin >> n;
  rep(i,6) {
    if (n[i] == '1') {
      ++c1;
    }
    if (n[i] == '2') {
      ++c2;
    }
    if (n[i] == '3') {
      ++c3;
    }
  }
  cout << (c1==1&&c2==2&&c3==3?"Yes":"No") << endl;
}
