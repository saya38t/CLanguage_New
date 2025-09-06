#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int l,r;
    cin >> l >> r;
    int ans = 0;
    if(l<=295 && r>=296) ans++;
    if(l<=416 && r>= 417) ans++;
    cout << ans << endl;
    return 0;
}
/**/