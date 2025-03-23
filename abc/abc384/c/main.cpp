#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  vector<pair<int,int>> v;
  rep1(i,31) {
    int s=0;
    if (i&1) s+=e;
    if (i&2) s+=d;
    if (i&4) s+=c;
    if (i&8) s+=b;
    if (i&16) s+=a;
    v.push_back({s,i});
  }
  sort(v.begin(),v.end(),[](const pair<int,int> &a,const pair<int,int> &b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first > b.first;
  });
  for(const auto& [s,i]:v) {
    string name = "";
    if (i&16) name+="A";
    if (i&8) name+="B";
    if (i&4) name+="C";
    if (i&2) name+="D";
    if (i&1) name+="E";
    cout << name << endl;
  }
}
