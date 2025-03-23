#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n,q;
  cin >> n >> q;
  unordered_map<int,int> m1;
  unordered_map<int,unordered_map<int,int>> m2;
  rep1(i,n) {
    m1.insert({i,i});
    m2.insert({i, {{i,0}}});
  }
  rep(i,q) {
    int op;
    cin >> op;
    int a,b;
    unordered_map<int,int> tmp;
    switch (op)
    {
    case 1:
      cin >> a >> b;
      m2.at(m1.at(a)).erase(a);
      m1.at(a) = b;
      m2.at(b).insert({a,0});
      break;
    case 2:
      cin >> a >> b;
      tmp = m2.at(a);
      m2.at(a) = m2.at(b);
      m2.at(b) = tmp;
      for (const auto& [k,v]:m2.at(a)) {
        m1.at(k) = a;
      }
      for (const auto& [k,v]:m2.at(b)) {
        m1.at(k) = b;
      }
      break;
    case 3:
      cin >> a;
      cout << m1.at(a) << endl;
      break;
    }
  }
}
