#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
    int n=5;
    vector<int>a(n);//配列でとると楽
    rep(i,n) cin >> a[i];//点数配列
    vector<pair<int,string>>ranking;
    for(int s=1; s<32; s++){
        int score=0;
        string name;
        rep(i,n){//ビット全探索
            if(s>>i &1){//i桁目が1なら得点＆文字
                score+=a[i];
                name+='A'+i;//A+1=B,A+2=C,,,
                //アルファべ計算
            }
        }
        ranking.emplace_back(-score,name);//scoreは降順,nameは昇順
    }
    sort(ranking.begin(), ranking.end());
    //要素そのものを取り出す
    for(auto [score, name]: ranking) cout << name << endl;
    return 0;
}