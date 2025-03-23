#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  vector<vector<vector<int>>> a;
  vector<vector<vector<ll>>> s;
  cin >> n;
  rep(i,n) {
    vector<vector<int>> vv;
    rep(j,n) {
      vector<int> vvv(n);
      rep(k,n) {
        cin >> vvv[k];
      }
      vv.push_back(vvv);
    }
    a.push_back(vv);
  }

  repe(i,n) {
    vector<vector<ll>> ss;
    repe(j,n) {
      ss.push_back(vector<ll>(n+1, 0));
    }
    s.push_back(ss);
  }

  rep1(i,n) {
    rep1(j,n) {
      rep1(k,n) {
        int aaa = a[i-1][j-1][k-1];
        if (i==1) {
          if (j==1) {
            if (k==1) {
              // i=j=k=1
              s[i][j][k] = aaa;
            } else {
              // i=j=1
              s[i][j][k] = aaa + s[i][j][k-1];
            }
          } else {
            if (k==1) {
              // i=k=1
              s[i][j][k] = aaa + s[i][j-1][k];
            } else {
              // i=1
              s[i][j][k] = aaa + s[i][j-1][k] + s[i][j][k-1] - s[i][j-1][k-1];
            }
          }
        } else {
          if (j==1) {
            if (k==1) {
              // j=k=1
              s[i][j][k] = aaa + s[i-1][j][k];
            } else {
              // j=1
              s[i][j][k] = aaa + s[i-1][j][k] + s[i][j][k-1] - s[i-1][j][k-1];
            }
          } else {
            if (k==1) {
              // k=1
              s[i][j][k] = aaa + s[i-1][j][k] + s[i][j-1][k] - s[i-1][j-1][k];
            } else {
              s[i][j][k] = aaa + s[i-1][j][k] + s[i][j-1][k] + s[i][j][k-1]
               - s[i][j-1][k-1] - s[i-1][j][k-1] - s[i-1][j-1][k] + s[i-1][j-1][k-1];
            }
          }
        }
      }
    }
  }
  int q;
  cin >> q;
  rep(i,q) {
    int lx,rx,ly,ry,lz,rz;
    cin >> lx >> rx >> ly >> ry >> lz >> rz;
    ll r = s[rx][ry][rz] - s[lx-1][ry][rz] - s[rx][ly-1][rz] + s[lx-1][ly-1][rz]
     - s[rx][ry][lz-1] + s[lx-1][ry][lz-1] + s[rx][ly-1][lz-1] - s[lx-1][ly-1][lz-1];
    cout << r << endl;
  }
}
