//貪欲法
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    string S,T;
    cin >> S >> T;
    int n = S.size();
    vector<string>ans;
    while(S!=T){
        string best;
        rep(i,n){
            string ns = S;
            if(S[i]!=T[i]){
                ns[i]=T[i];
                if(best=="") best=ns;
                else best=min(best,ns);
            }
        }
        S=best;
        ans.emplace_back(best);
    }
    cout << ans.size() << endl;
    rep(i,ans.size()) cout << ans[i] << '\n';
    return 0;
}
/**/