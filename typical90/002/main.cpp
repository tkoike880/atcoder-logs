#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

void export_string(int n, int i) {
  rep(j,n) {
    cout << (i&(1<<(n-1-j)) ? '(' : ')');
  }
  cout << endl;
}

bool judge(int n, int i) {
  stack<int> s;
  rep(j,n) {
    if (i&(1<<(n-1-j))) {
      s.push(1);
    } else {
      if (s.empty()) {
        return false;
      }
      s.pop();
    }
  }
  return s.empty();
}

int main() {
  int n;
  cin >> n;
  int loop = 1<<n;
  for(int i=loop;i>=0;--i) {
    if (judge(n,i)) {
      export_string(n,i);
    }
  }
}

/*
void func(vector<string> *sv, string str, char c, int d, int r) {
  if (r==0) {
    if (d==0) {
      sv->push_back(str);
    }
    return;
  }
  if (c=='(') {
    if (r>d+1) {
      func(sv, str + "(",'(',d+1,r-1);
    }
    func(sv, str + ")",')',d-1,r-1);
  } else {
    // )
    if (d==0) {
      func(sv, str + "(",'(',d+1,r-1);
      return;
    }
    if (r>d+1) {
      func(sv, str + "(",'(',d+1,r-1);
    }
    func(sv, str + ")",')',d-1,r-1);
  }
}

int main2() {
  int n;
  cin >> n;
  vector<string> sv;
  func(&sv,"(",'(',1,n-1);
  rep(i,sv.size()) {
    cout << sv.at(i) << endl;
  }
}
*/
