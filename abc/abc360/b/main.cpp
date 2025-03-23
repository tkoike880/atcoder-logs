#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int slen = s.size(), tlen = t.size();
  for (int w=1;w<slen;++w) {
    for (int c=0;c<w;++c) {
      string cur = "";
      for (int i=c;i<slen;i+=w) {
        cur += s.at(i);
      }
      if (cur == t) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
