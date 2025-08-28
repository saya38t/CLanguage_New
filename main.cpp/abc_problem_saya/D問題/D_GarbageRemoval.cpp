#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<bool>>vec(h,vector<bool>(w,false));
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        vec.at(x-1).at(y-1)=true;
        //H*Wの要素数は(x-1, y-1)となる
    }
    int q;
    cin >>q;
    vector<int>query(q);
    for(int i=0; i<q; i++){
        int num, qu;
        cin >> num >>qu;
        int count=0;
        if(num==1){//行
            for(bool c:vec.at(qu-1)){
                if(c) {
                    count++;
                    c=false;
                }
            }
        }
        else if(num==2){//列
            for(int i=0; i<h;i++){
                if(vec.at(i).at(qu-1)){
                    count++;
                    vec.at(i).at(qu-1)=false;
                }
            }
        }
        query.at(i) = count;
    }
    for(int i=0; i<q; i++){
        cout << query.at(i)<<endl;
    }
}
/*
縦ｈ横ｗのマス
ゴミn個
i番目のゴミ(Xi,Yi)
1 x ; ｘ行目のゴミの個数
2 y ; ｙ列目のゴミの個数
個数出したらその行、列のゴミはマス目から消える
*/