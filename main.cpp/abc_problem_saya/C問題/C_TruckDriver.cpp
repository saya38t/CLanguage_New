#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<ll,ll>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  ll n,a,b; cin >> n >>a >>b;
  string S; cin >> S;
  vector<ll>imosA(n+1);
  vector<ll>imosB(n+1);
  rep(i,n){
    if(S[i]=='a') imosA[i+1]++;
    else imosB[i+1]++;
    imosA[i+1]+=imosA[i];
    imosB[i+1]+=imosB[i];
  }//

  ll sum = 0;
  rep(i,n){
    //以上
    ll x = lower_bound(imosA.begin(),imosA.end(),imosA[i]+a)-imosA.begin();
    //以上
    ll y = upper_bound(imosB.begin(),imosB.end(),imosB[i]+b-1)-imosB.begin();
    y--;
    if(x==n+1 || x>y) continue;
    chmax(x,i+1); chmax(y,i+1);
    sum+=(y-x)+1;
  }
  cout << sum << endl;
  return 0;
}