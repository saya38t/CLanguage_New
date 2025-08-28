#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    ll n, w;
    cin >> n >> w;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    vector<bool>check(w,false);
    //1
    rep(i,n){
        int a = --A[i];
        if(check[a]==false && a<w) check[a] = true;//A[i]-1はA[i]の値
    }
    //2
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                ll aa = A[i]+A[j]-1;
                if(check[aa]==false && aa<w) check[aa] = true;
            }
        }
    }
    //3
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i!=j && j!=k && i!=k){
                    ll aaa = A[i] + A[j] + A[k] -1;
                    if(check[aaa]==false && aaa<w) check[aaa] =true;
                }
            }
        }
    }
    ll cnt = 0;
    rep(i,w){
        if(check[i]==true) cnt++;
    }
    cout << cnt << endl;
    return 0;

}