#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, rr;
  cin >> r;
  if (r < 100) {
    rr = 100 - r;
  } else if (r < 200) {
    rr = 200 - r;
  } else {
    rr = 300 - r;
  }
  cout << rr << endl;
}
