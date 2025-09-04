//簡潔解法
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>cnt(n+1);
    rep(i,q){
        int x;
        cin >> x;
        if(x==0){
            int l = q+1;
            for(int j=1; j<n+1; j++) l=min(l,cnt[j]);
            for(int j=1; j<n+1; j++) {
                if(cnt[j]==l){
                    x=j;
                    break;
                }
            }
        }
        cout << x << ' ';
        cnt[x]++;
    }
    cout << endl;
    return 0;
}
/**/