#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n; cin >> n;
  vector<ll>s(n);
  map<ll,ll>mp;
  rep(i,n) {
    cin >> s[i];
  }
  vector<ll>t=s;
  sort(t.begin(),t.end());
  rep(i,n) mp[t[i]]=i;
  ll ans=0;
  rep(i,n)rep(j,i){
    if(mp[s[j]]>mp[s[i]]) ans++;
  }
  cout << ans << endl;
  ll A=ans-1;
  while(A>1){
    ans*=A;
    A--;
  }
  cout << ans << endl;
  return 0;
}
//転倒数