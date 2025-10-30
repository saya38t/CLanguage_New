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
  string S,T; cin >> S >> T;
  int n = S.size();
  string atcoder = "atcoder";
  set<char>st;
  st.emplace('@');
  rep(i,n){
    st.emplace(S[i]);
    st.emplace(T[i]);
  }
  map<char,int>s;
  map<char,int>t;
  for(char ST:st) s[ST]=0;
  t=s;
  rep(i,n){
    s[S[i]]++;
    t[T[i]]++;
  }
  int sat=0,tat=0;
  for(auto [key,val]:s){
    if(key!='@'&&val!=t[key]){
      if(atcoder.find(key)==string::npos){//見つからなかったとき
        cout << "No" << endl;
        return 0;
      }
      if(val>t[key]){
        tat+=val-t[key];
        //cout << key << endl;
      }
      else if(val<t[key]) sat+=t[key]-val;
    }
  }
  if(sat<=s['@'] && tat<=t['@']) cout << "Yes" << endl;
  else cout << "No" << endl;
  //cout << sat << ','<<tat<<endl;
  //cout << s['a']-t['a'] << endl;
  return 0;
}
//53min
//こういう問題苦手なの、プログラミング下手すぎる