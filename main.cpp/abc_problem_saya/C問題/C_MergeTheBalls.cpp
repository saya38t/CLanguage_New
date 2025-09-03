#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n) cin>>A[i];
    vector<ll>ans;

    auto f = [&](auto self, vector<ll>& vec, ll a){
        vec.push_back(a);
        int s = vec.size();
        if(s<=1 || vec[s-1]!=vec[s-2]) return;
        else if(vec[s-1]==vec[s-2]){
            int sum = ++vec[s-1];//先に++してから代入！
            vec.pop_back();
            vec.pop_back();
            self(self,vec,sum);
        }
    };

    rep(i,n) f(f,ans,A[i]);
    cout << ans.size() << endl;
    return 0;
}