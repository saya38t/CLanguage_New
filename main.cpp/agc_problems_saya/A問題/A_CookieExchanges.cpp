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
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    rep(i,max(max(a,b),c)){
    if(a%2==1 || b%2==1 || c%2==1) break;//返す
    if(a==b && b==c) {
        ans = -1;
        break;
    }
    ans++;
    int sum = a+b+c;
    a=(sum-a)/2; b=(sum-b)/2; c=(sum-c)/2;//繰り返す
    }
    cout << ans << endl;
    return 0;
}
/*言い換えてシンプルに解く*/