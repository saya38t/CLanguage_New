//substr
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
        S= S.substr(1)+S[0];//Sを右から1つずつ前に持ってくる
        //Sの1つ目以降だけ取り出す+S[0]
    }
    cout << "No" << endl;
    return 0;
}