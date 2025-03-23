#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  map<int,int> mp;
  map<int,int> mq1;
  map<int,int> mq2;
  int n;
  cin >> n;
  rep1(i,n) {
    int p;
    cin >> p;
    mp.insert({i,p});
  }
  rep1(i,n) {
    int q;
    cin >> q;
    mq1.insert({i,q});
    mq2.insert({q,i});
  }
  rep1(i,n) {
    cout << mq1.at(mp.at(mq2.at(i))) << " ";
  }
}
