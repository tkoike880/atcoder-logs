#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repe(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define defin(type, var) type var; cin >> var
typedef long long ll;

using Gragh = vector<vector<int>>;

void _dfs(Gragh *g, vector<int> *dist, int s, int d) {
  // cout << d << endl;
  dist->at(s) = d;
  for (const auto& nd:g->at(s)) {
    if (dist->at(nd) == -1) {
      _dfs(g,dist,nd,d+1);
    }
  }
}

pair<int,int> dfs(Gragh *g, int n, int s) {
  vector<int> dist(n,-1);
  _dfs(g,&dist,s,0);
  int max=-1,p=-1;
  rep(i,n) {
    if (dist.at(i)>max) {
      max = dist.at(i);
      p=i;
    }
    // cout << dist.at(i) << endl;
  }
  return {max,p};
}

pair<int,int> dfs2(Gragh *g, int n, int s) {
  vector<int> dist(n,-1);
  stack<int> st;
  dist.at(s) = 0;
  st.push(s);
  while(!st.empty()) {
    auto nd = st.top();
    st.pop();
    for (const auto& nnd:g->at(nd)) {
      if (dist.at(nnd) == -1) {
        dist.at(nnd) = dist.at(nd)+1;
        st.push(nnd);
      }
    }
  }
  int max=-1,p=-1;
  rep(i,n) {
    if (dist.at(i)>max) {
      max = dist.at(i);
      p=i;
    }
    // cout << dist.at(i) << endl;
  }
  return {max,p};
}

int main() {
  int n;
  cin >> n;
  Gragh g(n);
  rep(i,n) {
    int a,b;
    cin >> a >> b;
    --a;--b;
    g.at(a).push_back(b);
    g.at(b).push_back(a);
  }
  auto [_,p] = dfs2(&g,n,0);
  auto [max,__] = dfs2(&g,n,p);
  cout << (max+1) << endl;
}
