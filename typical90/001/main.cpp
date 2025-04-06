#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

bool judge(vector<int> *v, int m, int k) {
  int c=0,l=0;
  rep(i,v->size()) {
    l+=v->at(i);
    if (l>=m) {
      l=0;
      ++c;
    }
  }
  return c>=k+1;
}

int main() {
  int n,l,k;
  cin >> n >> l >> k;
  vector<int> v(n+1);
  int prev=0;
  rep(i,n) {
    int a;
    cin >> a;
    v.at(i) = a-prev;
    prev=a;
  }
  v.at(n) = l-prev;
  int left=0,right=l;
  while(left<right && right-left>1) {
    int mid = (left+right) >> 1;
    if (judge(&v,mid,k)) {
      left = mid;
    } else {
      right = mid;
    }
  }
  if (judge(&v,left,k)) {
    cout << left << endl;
  } else {
    cout << right << endl;
  }
}
