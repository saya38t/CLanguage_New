#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)
using ll = long long;

vector<pair<int,int>> num(vector<pair<int,int>>A){
    int j=1;
    rep(i,A.size()){
        A[i].second = j;
        j++;
    }
    return A;
}

vector<bool> solve(vector<pair<int,int>>A, vector<bool>ans, int x){
    sort(A.rbegin(), A.rend());
    int i=0;
    while(x>-1){
        if(ans[A[i].second]==false){
            ans[A[i].second]=true;
            x--;
        }
        i++;
    }
    return ans;
}

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<pair<int,int>>A(n);
    vector<pair<int,int>>B(n);
    vector<pair<int,int>>AB(n);

    A=num(A); B=num(B); AB=num(AB);

    rep(i,n) cin >> A[i].first;
    rep(i,n) cin >> B[i].first;
    rep(i,n) AB[i].first = A[i].first + B[i].first;

    vector<bool>ans(n+1,false);

    ans=solve(A,ans,x); ans=solve(B,ans,y); ans=solve(AB,ans,z);

    rep(i,n+1){
        if(ans[i+1]) cout << i+1 << '\n';
    }
    return 0;
}