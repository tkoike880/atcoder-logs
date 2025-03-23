#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  rep(i, n) {
    int aa;
    cin >> aa;
    a.at(i) = {aa, i + 1};
  }
  sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
  });
  cout << a.at(1).second << endl;
}
