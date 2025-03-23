#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool is_kaibun(string *st, int start, int end) {
  if (start==end) {
    return true;
  }
  int s=start,e=end;
  while(s<=e) {
    if (st->at(s) != st->at(e)) {
      return false;
    }
    ++s;
    --e;
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  int ss = s.size();
  int p=ss;
  for (int i=ss-1;i>=0;--i) {
    if (!is_kaibun(&s,i,ss-1)) {
      break;
    }
    p=i;
  }
  cout << s;
  for(int i=p-1;i>=0;--i) {
    cout << s.at(i);
  }
  cout << endl;
}
