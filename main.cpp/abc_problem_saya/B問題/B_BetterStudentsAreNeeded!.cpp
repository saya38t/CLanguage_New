#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)
using ll = long long;

void num(vector<pair<int,int>>& A){//関数(配列いじる)
    int j=1;
    rep(i,A.size()){
        A[i].second = -j;
        j++;
    };
}

void solve(vector<pair<int,int>>& A, vector<bool>& ans, int x){
    sort(A.rbegin(), A.rend());//参照渡し
    int i=0;
    while(x>0){
        if(ans[-A[i].second]==false){
            ans[-A[i].second]=true;
            x--;
        }
        i++;
    }
}

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<pair<int,int>>A(n);
    vector<pair<int,int>>B(n);
    vector<pair<int,int>>AB(n);

    num(A); num(B); num(AB);

    rep(i,n) cin >> A[i].first;
    rep(i,n) cin >> B[i].first;
    rep(i,n) AB[i].first = A[i].first + B[i].first;

    vector<bool>ans(n+1);
    rep(i,n+1) ans[i] = false;

    solve(A,ans,x);
    solve(B,ans,y);
    solve(AB,ans,z);

    rep(i,n+1){
        if(ans[i]) cout << i << '\n';
    };
    return 0;
}