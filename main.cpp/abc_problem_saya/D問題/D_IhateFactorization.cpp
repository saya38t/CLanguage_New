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
    ll x; cin >> x;
    for(ll a=-5000; a<5000; a++){
        ll A = (ll)a*a*a*a*a;
        for(ll b=-5000; b<5000; b++){
            if(A-(b*b*b*b*b)==x){
                cout << a << ' ' << b << endl;
                return 0;
            }
        }
    }
    return 0;
}