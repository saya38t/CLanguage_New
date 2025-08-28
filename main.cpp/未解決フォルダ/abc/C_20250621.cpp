#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>black(q);
    vector<int>A(q);
    rep(i,q){
        int a;
        cin >> a;
        A[i]=a;
    }
    vector<bool>white(n+1,true);
    for(int i=0; i<q;i++){
        if(white[A[i]]) {
            black[i] = A[i];
            white[A[i]] = false;

        }
        else{
            black[i] = A[i];
            sort(black.begin(), black.end());
            black.erase(unique(black.begin(), black.end()), black.end());
        }
        int num = black.size();
        int ans = 0;
        if(num>0){
            ans++;
            for(int i=0; i<(num-1); i++){
                int pre= *ite;
                advance(ite,1);
                int af= *ite;
                if((af-pre)>1) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
/**/