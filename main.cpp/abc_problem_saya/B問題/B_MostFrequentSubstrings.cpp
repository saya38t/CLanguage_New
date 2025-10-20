#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n,k;
  cin >> n >> k;
  string S;
  cin >> S;
  set<string>ans;
  rep(i,n-k+1){
    string s=S.substr(i,k);
    ans.emplace(s);
  }
  vector<string>all;//vectorを用意
    for(string d:ans) all.emplace_back(d);//setの要素をvectorに

  int cnt=0;
  int g=all.size();
  vector<int>u(g);
  rep(i,g){
    int c=0;
    rep(j,n-k+1){
    string t=S.substr(j,k);
    if(t==all[i]) c++;
  }
    cnt=max(cnt,c);
    u[i]=c;
  }
  cout << cnt << endl;
  rep(i,u.size()) if(u[i]==cnt) cout << all[i] <<' ';
  cout << endl;
  return 0;

}
/*言い換えてシンプルに解く*/