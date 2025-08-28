#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];
    vector<int>jAj(n);
    vector<int>iAi(n);//ここで分けて一致させようとしたのが不味い
    rep(i,n){//iとjを分離したい
        jAj[i] = i+1-A[i];
        iAi[i] = i+1+A[i];
    }
    int cnt =0;
    for(int i=0; i<n; i++){//ループ処理でTLE
        for(int j=0; j<n; j++){
            if(iAi[i]==jAj[j] && i<j) cnt ++;
        }
    }
    cout << cnt << endl;
}
/**/