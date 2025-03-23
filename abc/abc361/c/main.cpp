#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> v(n,0);
  for (int i=0;i<n;++i){
    cin >> v.at(i);
  }
  sort(v.begin(), v.end());
  // for (const auto& e:v) {
  //   cout << e << " ";
  // }
  // cout << endl;
  int r = v[n-1];
  for (int i=0;i<=k;++i) {
    int rr = v.at(n-1-k+i) - v.at(i);
    if (rr < r) {
      // cout <<i<<endl;
      // cout <<rr<<endl;
      r = rr;
    }
  }
  cout << r << endl;
}
