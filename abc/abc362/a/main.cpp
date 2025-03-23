#include <bits/stdc++.h>
using namespace std;

int solve(int r, int g, int b, string c) {
  if (c == "Red") {
    if (g < b) {
      return g;
    } else {
      return b;
    }
  }
  if (c == "Green") {
    if (r < b) {
      return r;
    } else {
      return b;
    }
  }
  if (c == "Blue") {
    if (r < g) {
      return r;
    } else {
      return g;
    }
  }
}

int main() {
  int r,g,b;
  string c;
  cin >> r >> g >> b >> c;
  cout << solve(r,g,b,c) << endl;
}
