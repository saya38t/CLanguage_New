#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>array(n+2);
    vector<int>A(q);
    rep(i,q){
        int a;
        cin >> a;
        A[i] = a;
    }
    int ans = 0;
    rep(i,q){
        int a = A[i];
        if(array[a]==0){
            array[a]=1;//反転
            if(array[a-1]==0 && array[a+1]==0) ans++;
            else if(array[a-1]==1 && array[a+1]==1) ans--;
        }
        else {
            array[a]=0;//反転
            if(array[a-1]==0 && array[a+1]==0) ans--;
            else if(array[a-1]==1 && array[a+1]==1) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
/*
0010000 ans++;
0010100 ans++;
0011100 ans--;
0010100 ans++;
0000100 ans--;

白->黒
両隣が0 ans++;
両隣が1 ans--;

黒->白
両隣が0 ans--;
両隣が1 ans++;

N個配列用意
Aの配列
A[i]につき
元が白か黒かで分岐->上記処理
※左端、右端も確認したいので両脇０作る
ans出力、Q回
*/