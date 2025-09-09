#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int t;
    cin >> t;
    rep(i,t){
        unsigned ans = 0;
        unsigned a,b,c;
        cin >> a >> b >> c;
        unsigned m = min(min(a,b),c);
        ans += m;
        a-=m;
        b-=m;
        c-=m;
        if(b==0 && a>0 && c>0){
            unsigned n =0;
            ans += min({a,c,(a+c)/3});
            cout << ans << '\n';
        }
        else cout << ans << '\n';
    }
    return 0;
}
/**/