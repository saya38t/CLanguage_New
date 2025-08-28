#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n){
        int a;
        cin >> a;
        A.at(i)=a;
    }
    int k;
    cin >> k;
    int ans=0;
    rep(i,n){
        if(k<=A.at(i)) ans++;
    }
    cout << ans << endl;
}
/**/