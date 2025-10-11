#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<ll,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
  int n;
  cin >> n;
  vector<int>S(n); rep(i,n) cin >> S[i];
  priority_queue<P,vector<P>, greater<P>>Q;//昇順
  rep(i,n){
    ll t; cin >> t;
    Q.push(P(t,i));//0~n-1
  }
  vector<ll>snuke(n,1000000001);//時間
  while(!Q.empty()){
    ll now=Q.top().first;//時間
    int s=Q.top().second;//snuke
    Q.pop();
    if(snuke[s]<now) continue;//既にsnuke[s+1]も受け取り済み
    snuke[s]=now;
    Q.push(P(now+S[s],(s+1+n)%n));//i+1が宝石を貰う時間
  }
  rep(i,n) cout << snuke[i] << endl;
  return 0;
}