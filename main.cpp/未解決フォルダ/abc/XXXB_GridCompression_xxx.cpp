//3652KB

#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>>a(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W;j++){
            cin >> a.at(i).at(j);
        }
    }
    vector<char>zero(W,0);
    for(int i=0; i<H; i++){
        bool pro1 =true;
        for(int j=0; j<W; j++){
            if(a.at(i).at(j)=='#'){
                pro1=false;
                break;
            }
        }
        if(pro1){//横書き換え
            a.at(i)=zero;
        }
    }
    for(int i=0; i<W; i++){
        bool pro2 =true;
        for(int j=0; j<H; j++){
            if(a.at(j).at(i)=='#'){
                pro2=false;
                break;
            }
        }
        if(pro2){//縦書き換え
            for(int j=0; j<H; j++){
                a.at(j).at(i)='0';
            }
        }
    }
    for(int i=0; i<H; i++){
        bool check=false;
        for(int j=0; j<W; j++){
            int size=0;
            char ans = a.at(i).at(j);
            if(ans != '0'){
                cout << ans;
                check=true;
            }
        }
        if(check){
            cout << endl;
        }
    }
}
/*
一列.のやつを全て0で書き換える
代入するときに0だけ代入しない分岐をする
出力
*/