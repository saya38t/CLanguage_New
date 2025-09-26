#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin >> n;
    vector<ll>A(n);
    rep(i,n) cin >> A[i];
    sort(A.begin(),A.end());
    vector<ll>kisu((n+1)/2);
    vector<ll>gusu;
    rep(i,(n+1)/2) kisu[i]=A[i];
    for(int i=n/2+1; i<n; i++) gusu.emplace_back(A[i]);
    rep(i,n/2){
        if(kisu[i]>=gusu[i] || kisu[i+1]>=gusu[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/*言い換えてシンプルに解く*/