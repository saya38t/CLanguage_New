#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i,n) cin >> S[i];

    vector<string> ans;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                bool check = true;
                string new_s = S[i] + S[j];
                rep(k,ans.size()) {
                    if(ans[k]==new_s) {
                        check =false;
                        break;
                    }
                }
                if(check) ans.push_back(new_s);
            }
        }
    }

    
    cout << ans.size() << endl;

    return 0;
}
/**/