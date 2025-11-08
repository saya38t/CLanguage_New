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
  vector<int>W(n);
  ll wi = 0;
  vector<P>hb(n);
  rep(i,n){
    int w,h,b; cin >> w >> h>>b;
    W[i]=w;
    hb[i]=pair(h,b);
    wi+=w;
  }
  wi/=2;
  ll happy=0;
  //headをdfs
  auto dfs = [&](auto dfs, ll x, vector<int>a) -> void {
        if(x>wi){//再帰終了時の処理
          a.pop_back();
          ll hp=0;
          vector<bool>b(n);
          rep(i,a.size()){
            hp+=(ll)hb[a[i]].first;
            b[a[i]]=true;
          }
          rep(i,n){
            if(!b[i]) hp+=(ll)hb[i].second;
          }
          happy=max(happy,hp);
          return;//ループに戻る
        }
        rep(i,n){
            vector<int> na = a;//関数保持
            ll nx = x;
            na.push_back(i);//足す
            x+=W[i];
            dfs(dfs,nx,na);//再帰呼び出し
        }
    };
    ll x = 0;
    dfs(dfs,x,vector<int>(0));
    cout << happy << endl;
  return 0;
}