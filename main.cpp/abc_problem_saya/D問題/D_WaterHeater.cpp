//いもす法(累積和)
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,w;
    cin >> n >> w;
    vector<ll>check(200002);
    rep(i,n){
        ll s,t,p;
        cin >> s >> t >> p;
        check[s]+=p;
        check[t]-=p;
    }
    for(int i=1; i<200001; i++){
        check[i] += check[i-1];
    }
    for(int i=0; i<200001; i++){//0<=sなのでi=0スタートで確認
        if(check[i]>w){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/**/