#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll n;
     cin >> n;
    vector<bool>asn(n+1,false);
    vector<ll>A(n);
    vector<ll>B(n);
    rep(i,n) {
        cin >> A[i] >> B[i];
    }
    vector<int>fal;
    rep(i,n){
        ll a,b;
        a=A.at(i); b=B.at(i);
        if(a==0 && b==0) {
            asn.at(i+1)=true;
        }
        else if(asn[a] || asn[b]){
            asn.at(i+1)=true;
        }
        else fal.emplace_back(i+1);
    }
    int k=0;
    while(fal.size()>0 || k<3){rep(i,fal.size()){
        if(asn[fal[i]] || asn[fal[i]]){
            asn.at(fal[i])=true;
            fal.erase(fal.begin()+i);
        }
        k++;
    }}
     ll cnt = 0;
     rep(i,n+1){
        if(asn.at(i))cnt++;
     }
     cout << cnt << endl;
     return 0;
}
/*言い換えてシンプルに解く*/