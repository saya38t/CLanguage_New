#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    int cnt=0;
    rep(i,n-1){
        x-=a[i];
        if(x<0) break;
        cnt++;
    }
    if(x==a[n-1]) cnt ++;
    cout << cnt << endl;
    return 0;
}