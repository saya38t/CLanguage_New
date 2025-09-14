#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    ll n,r;
    cin >> n >> r;
    vector<ll>l(n);
    rep(i,n) cin >> l[i];
    ll fin = n-1;
    for(ll i=n-1; i>-1; i--){
        if(l[i]==0) {
            fin = i;
            break;
        }
    }
    if(fin==-1) 
}
/*言い換えてシンプルに解く*/