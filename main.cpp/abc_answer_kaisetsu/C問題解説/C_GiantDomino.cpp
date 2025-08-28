#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int t;
    cin >> t;
    for(int j=0; j < t; j++) {
        int n; 
        cin >> n;
        vector<int> domino(n);
        for(int i=0; i<n; i++){
            cin >> domino[i];
        }
        sort(domino.begin()+1, domino.end()-1);
        vector<int> ans(1);
        ans[0]=domino[0];
        bool answer = false;
        for(int i=1; i<n; i++){
            if(*(ans.end()-1)*2 < domino[i]){
                ans.push_back(domino[i-1]);
            }
            if(*(ans.end()-1)*2 >= domino[n-1]){
                answer = true;
                break;
            }
        }
        if(answer) cout << ans.size()+1 << endl;
        else cout << "-1" << endl;
            
    }

    return 0;
}
