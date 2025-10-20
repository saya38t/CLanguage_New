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
  int q; cin>>q;
  vector<int>imos(1);
  vector<int>mn(1);
  rep(i,q){
    int num; cin>>num;
    if(num==1){
      char c; cin>>c;
      if(c=='(') imos.emplace_back(imos.back()+1);
      if(c==')') imos.emplace_back(imos.back()-1);
      mn.emplace_back(min(mn.back(),imos.back()));
    }
    else{
      imos.pop_back();
      mn.pop_back();
    }
    if(imos.back()==0 && mn.back()>=0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}