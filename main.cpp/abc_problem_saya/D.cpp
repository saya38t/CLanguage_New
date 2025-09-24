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
    int n; ll m;
    cin >> n >> m;
    vector<ll>A(n);
    rep(i,n) cin >> A[i];
    ll sum=0;
    rep(i,n) sum+=A[i];
    if(sum<=m) {
        cout << "infinite" << endl;
        return 0;
    }
    
    return 0;
}