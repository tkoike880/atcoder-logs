#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  int prev=0;
  int a;
  bool r = true;
  cin >> n;
  rep(i,n) {
    cin >> a;
    if (a<=prev) {
      r=false;
      break;
    }
    prev = a;
  }
  cout <<(r ? "Yes" : "No") << endl;
}
