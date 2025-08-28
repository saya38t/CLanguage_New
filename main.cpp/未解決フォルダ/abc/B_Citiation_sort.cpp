#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i =0; i<(n) ;++i)

int main(){
    int n;
    cin >> n;
    vector<int> a (n);
    rep(i,n)  cin >> a.at(i);
    sort(a.begin(), a.end());
    int a_size=a.size();
    int ans=0;
    rep(i,n){
        int x=a.at(i);
        if(x<= a_size-i) {
            ans = x;
        }
    }
    cout << ans << endl;
    return 0;
}
//countしなくても要素数でチェック可能