#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int a,v,b,w,t;
    cin >> a >> v >> b >> w >> t;
    int s = v-w;
    //ll=(ll)int*int
    ll dst = (ll)s*t;//右辺もキャストしないとオーバーフローして壊れた値が入る
    ll shr = abs(b-a);
    if(dst >= shr) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}