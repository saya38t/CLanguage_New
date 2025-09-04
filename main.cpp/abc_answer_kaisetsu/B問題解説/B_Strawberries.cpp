//簡潔解答
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    rep(i,n){
        if(s.substr(i,k)==string(k,'O')){
            //string(k,'O')でOをk個並べた文字作れる
            ans ++;
            rep(j,k){//iを起点にk個注目
                s[i+j]='X';
            }
        }
    }
    cout << ans << endl;
    return 0;
}
/**/