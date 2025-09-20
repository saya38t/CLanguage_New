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
    int n,m,k;
    cin >> n >> m>>k;
    vector<int>A(n);
    vector<int>ans;
    rep(i,k){
        int a,b;
        cin >> a>>b;
        A[a-1]++;
        if(A[a-1]==m) ans.emplace_back(a);
    }
    rep(i,ans.size()) cout << ans[i] << ' ';
    cout << endl;
    return 0;

}
/*言い換えてシンプルに解く*/