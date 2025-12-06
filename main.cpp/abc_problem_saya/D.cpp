#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int a; cin >> a;
  ll n; cin >> n;
  ll N=n; int cnt=0;
  while(N>0){
    N/=a;
    cnt++;
  }
  vector<ll>w(cnt+1);//n進数の各桁
  w[0]=1;//n^0
  rep(i,cnt) w[i+1]=w[i]*a;//a^1~k

  vector<ll>num;

  auto solve=[&](int k){//ラムダ式
  //ｎ進数全探索
  rep(i,w[k]){//0~n^k-1
    int t = i;
    ll s=0;
    rep(j,k){
      s+=w[j]*(t/w[j]%n);
      s+=w[cnt-j]*(t/w[j]%n);
    }
    num.emplace_back(s);
    if(k*2<cnt){
      ll u=0;
      rep(j,k) {
        u+=w[j]*(t/w[j]%n);
        u+=w[cnt-j+1]*(t/w[j]%n);
      }
      rep(l,a) num.emplace_back(u+);
    }
  }
  };
  rep(k,cnt/2) solve(k);

  return 0;
}