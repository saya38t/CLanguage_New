#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    string S,T;
    cin >> S >> T;
    int n= S.size();
    vector<int>num(n);
    rep(i,n) num[i]=i;

    rep(i,n){
        bool ans = true;
        rep(j,n){
            if(S[num[j]]!=T[j]){
                ans = false;
                break;
            }
        }
        if(ans){
            cout << "Yes" << endl;
            return 0;
        }
        rep(j,n){
            num[j]++;
            num[j]%=n;
        }
    }
    cout << "No" << endl;
    return 0;
}