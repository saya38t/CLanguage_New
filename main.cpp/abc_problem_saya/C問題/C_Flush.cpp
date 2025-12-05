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

int main(){
  ll n,q;cin>>n>>q;
  set<ll>st;
vector<int>B(q);
  map<ll,ll>mp;
  map<ll,ll>num;
  rep(i,n){
    ll a; cin>>a;
    mp[a]++;//個数累積和
    num[a]++;//種類数累積和
    st.emplace(a);
  }
rep(i,q) cin>>B[i];
  ll pre=0,pnum=0;
  for(auto [key,val]:mp){
    pnum+=val;
    pre+=val*key;
    mp[key]=pre;
    num[key]=pnum;
  }
vector<ll>vec;
for(ll s:st) vec.emplace_back(s);
ll N=vec.size();
  rep(i,q){
    ll b = B[i];
    ll x =lower_bound(vec.begin(),vec.end(),b)-vec.begin();
if(x==N){
  cout<<-1<<endl;
  continue;
}
ll y =lower_bound(vec.begin(),vec.end(),b-1)-vec.begin();
if(y==0) cout << (b-1)*n+1 <<endl;
else cout << (b-1)*(n-num[vec[y-1]])+1+mp[vec[y-1]]<<endl;
  }
  return 0;
}