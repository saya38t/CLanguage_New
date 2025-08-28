//解法２：Lを固定したらその都度swapを続ける

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

void solve(){
    int n; string s;
    cin >> n >> s;
    int l=-1, r=n-1;
    for(int i=0 ;i < n-1 ;i++){
        if(s[i]>s[i+1]){
            l=i;
            break;
        }
    }
    if(l!=-1){
        for(int i=l+1; i<n-1; i++){
            if(s[l]<s[i+1]){
                r=i;
                break;
            }
        }
        for(int i=l; i<r; i++){
            swap(s[i],s[i+1]);
        }
    }
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    rep(i,t) solve();
    return 0; 
}

/*
swap関数
swap(a,b);
で二つの引数を交換
*/