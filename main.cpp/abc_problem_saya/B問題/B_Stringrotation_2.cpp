//rotate関数
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    string S,T;
    cin >> S >> T;
    int n= S.size();
    rep(i,n){
        if(S==T){
            cout << "Yes" << endl;
            return 0;
        }
        rotate(S.begin(), S.begin() + 1, S.end());
    }
    cout << "No" << endl;
    return 0;
}