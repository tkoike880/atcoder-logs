#include <bits/stdc++.h>
using namespace std;

bool prod(pair<int,int> a, pair<int,int> b, pair<int,int> c) {
  return ((a.first - c.first) * (b.first - c.first)) + ((a.second - c.second) * (b.second - c.second)) == 0;
}

int main() {
  pair<int,int> a,b,c;
  cin >> a.first >> a.second;
  cin >> b.first >> b.second;
  cin >> c.first >> c.second;
  if (prod(a,b,c) || prod(b,c,a) || prod(c,a,b)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
