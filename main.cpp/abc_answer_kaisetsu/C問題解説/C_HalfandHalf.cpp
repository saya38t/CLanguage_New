#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >>x >>y;
    ll ans = max(x,y)*2*c;
    for(int ab=0; ab<=max(x,y)*2; ab+=2){
        ll pizza = ab*c;
        ll X = x-ab/2;
        ll Y = y-ab/2;
        if(X>0) pizza += X*a;
        if(Y>0) pizza += Y*b;
        ans = min(ans,pizza);
    }
    cout << ans << endl;
    return 0;
}