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
  int n; string S; cin >> n >> S;
  vector<int>W(n);
  rep(i,n) cin >> W[i];
  vector<int>one,zero;
  rep(i,n){
    if(S[i]=='0') zero.emplace_back(W[i]);
    else one.emplace_back(W[i]);
  }
  sort(zero.begin(),zero.end());
  sort(one.begin(),one.end());
  int m = zero.size(), N=one.size();
  int ans = max(m,N);
  rep(i,m){
    int x = lower_bound(one.begin(),one.end(),zero[i])-one.begin();
    int X = lower_bound(zero.begin(),zero.end(),zero[i])-zero.begin();
    if(x==one.size()) ans = max(ans,X-1);
    else ans = max(ans,N-x+X-1);
    int y = upper_bound(one.begin(),one.end(),zero[i])-one.begin();
    int Y = upper_bound(zero.begin(),zero.end(),zero[i])-zero.begin();
    if(y==one.size()) ans = max(ans,m);
    else ans = max(ans,N-y+(Y-1)+1);
  }
  rep(i,N){
    int x = lower_bound(one.begin(),one.end(),one[i])-one.begin();
    int X = lower_bound(zero.begin(),zero.end(),one[i])-zero.begin();
    if(x==one.size()) ans = max(ans,X-1);
    else ans = max(ans,N-x+X-1);
    int y = upper_bound(one.begin(),one.end(),one[i])-one.begin();
    int Y = upper_bound(zero.begin(),zero.end(),one[i])-zero.begin();
    if(y==one.size()) ans = max(ans,m);
    else ans = max(ans,N-y+(Y-1)+1);
  }
  cout << ans << endl;
  return 0;
}