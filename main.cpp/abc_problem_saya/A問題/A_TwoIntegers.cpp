//倍数は1倍も含む！
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int x,y;
    cin >> x >> y;
    if(x%y==0) {
        cout << -1 << endl;
        return 0;
    }
    cout << x << endl;
    return 0;
}
/**/