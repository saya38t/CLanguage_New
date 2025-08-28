#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>A(n);
    vector<int>B(n);
    rep(i,n) cin >> A[i];
    rep(i,n) cin >> B[i];
    ll sum = 0;
    rep(i,n){
        int minAB = min(A[i],B[i]);
        sum += minAB;
    }
    rep(i,q){
        char c;
        int x,v;
        cin >> c >> x >> v;
        x--;
        int befo = min(A[x],B[x]);
        if(c=='A') A[x]=v;
        else if(c=='B') B[x]=v;
        int af = min(A[x],B[x]);
        sum += (af-befo);
        cout << sum << endl;
    }
    return 0;
}
/**/