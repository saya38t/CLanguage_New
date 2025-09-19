#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin >> n;
    vector<ll>runt;
    for(ll i=1; i<1e12; i=10*i+1){
        runt.emplace_back(i);
    }
    set<ll>st;
    for(ll a:runt){
        for(ll b:runt){
            for(ll c:runt){
                st.emplace(a+b+c);
            }
        }
    }
    vector<ll>all;
    for(ll d:st) all.emplace_back(d);
    cout << all.at(n-1) << endl;
    return 0;
}
/*言い換えてシンプルに解く*/