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
  int n,a,b; cin >> n >> a >>b;
  string S; cin >> S;
  vector<int>A,B;
  vector<int>imosA(n),imosB(n);
  rep(i,n){
    if(S[i]=='a') {
      A.emplace_back(i);
      imosA[i]++;
    }
    else{
      B.emplace_back(i);
      imosB[i]++;
    }
  }
  rep(i,n-1){
    imosA[i+1]+=imosA[i];
    imosB[i+1]+=imosB[i];
  }
//
map<int,int>mpb;
rep(i,B.size())mpb[B[i]]=i;
  ll ans = 0;
  bool bchk;
  rep(l,n){
    int x=lower_bound(A.begin(),A.end(),l)-A.begin();
    int y=lower_bound(B.begin(),B.end(),l)-B.begin();
    if(x==A.size()) continue;
    if(y==B.size()) bchk=true;//b観ないとき
//
    int z = lower_bound(imosA.begin(),imosA.end(),imosA[A[x]]+a-1)-imosA.begin();
    int w;
    if(bchk) w = n;
    else w = upper_bound(imosB.begin(),imosB.end(),imosB[B[y]]+b-1)-imosB.begin();
    if(mpb[w]-1>=0)w=B[mpb[w]-1];
    int k=w-z;
    if(k>0) {
      ans+=k;
    }
  }
  cout << ans << endl;
  return 0;
}