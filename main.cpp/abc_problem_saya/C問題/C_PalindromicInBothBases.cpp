#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

//関数つくる
bool isPalin(ll x, ll a){//A進数なのか
  string s="";
  ll X=x;
  while(X>0){
    s+='0'+X%a;
    X/=a;
  }
  string rs=s;
  reverse(rs.begin(),rs.end());
  return s==rs;
}

int main(){
  ll a,n; cin >> a >> n;
  ll ans = 0;
  auto check = [&](string s)->void{
    ll y=stoll(s);
    if(y<=n && isPalin(y,a)) ans+=y;
  };
  //10進数回文
  rep(i,1e6){
    ll I=i;
    string s=to_string(I);
    string rs=s;
    reverse(rs.begin(),rs.end());
    s+=rs;
    check(s);
    s.erase(s.begin()+(s.size()/2));
    check(s);
  }
  cout << ans << endl;
  return 0;
}