#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
  int g,h,i,j,k,l;
  cin>>g>>h>>i>>j>>k>>l;
  bool fl = ((g<d) && (h<e) && (i<f)) && ((a<j) && (b<k) && (c<l));
  cout << (fl ? "Yes" : "No") << endl;
}
