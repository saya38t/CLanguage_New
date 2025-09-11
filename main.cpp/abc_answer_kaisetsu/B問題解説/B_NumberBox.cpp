#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);
const vector<int>di={1,1,1,0,0,-1,-1,-1};
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin >> n;
    vector<vector<int>>A(n,vector<int>(n));
    rep(i,n){
        string s;
        cin >> s;
        rep(j,n) A[i][j]=s[j];
    }
    ll ans = 0;
    rep(i,n)rep(j,n)rep(v,8){
        ll num = 0;
        int x=i, y=j;
        num = A[x][y];
        rep(k,n-1){
            x+=di[v]; y+=dj[v];
            x = (x+n)%n;
            y = (y+n)%n;
            num = (ll)num*10+A[x][y];
        }
        cout << num << endl;
        ans = max(ans,num);
    }
    cout << ans << endl;
    return 0;
}
/**/