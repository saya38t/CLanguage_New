#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    //累積w
    vector<int>ims(n+1);
    rep(i,n) ims[i+1]=A[i];
    rep(i,n) ims[i+1]+=ims[i];
    //
    ims.emplace_back(0);
    int m=0;
    const int mod=n+1;
    rep(i,q){
        int num; cin >> num;
        if(num==1){
            int c;cin >> c;
            m+=c%mod;
            m=(m+mod)%mod;//
        }
        else{
            int l,r;
            cin >> l >> r;
            int L,R;
            L=(l+m+mod)%mod;
            R=(r+m+mod)%mod;
            //
            if(ims[R]-ims[L-1]>0) cout << ims[R]-ims[L-1] << endl;
            else {
                cout << -(ims[R]-ims[L+1])+ims[R] << endl;
                //cout << L << ',' << R<< endl;
            }
        }
    }
    return 0;
}
/*言い換えてシンプルに解く*/