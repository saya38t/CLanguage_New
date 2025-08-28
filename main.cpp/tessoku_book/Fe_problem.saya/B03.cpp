#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a.at(i);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                for(int k=0; k<n; k++){
                    if(k!=i && k!=j){
                        if(a.at(i) + a.at(j) + a.at(k)==1000){
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
/*
n個商品、商品iの価格はAi円
異なる３つの商品、合計金額ピッタリ１０００円
存在するか
*/