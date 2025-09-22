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
    ll a,b;
    cin >> a >> b;
    ll cnt=0;
    ll M=max(a,b), m=min(a,b);
    while(m!=0){
        cnt += M/m;
        M%=m;
        swap(M,m);
    }
    cout << --cnt << endl;
}
/*言い換えてシンプルに解く*/