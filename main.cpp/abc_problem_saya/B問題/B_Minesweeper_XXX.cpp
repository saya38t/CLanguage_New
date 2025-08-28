#include<bits/stdc++.h>
using namespace std;

int main(){
int H,W;
string S;
cin >> H >> W >> S;

for(int l = 0; l < W-1; l++){
    string s;
    cin >> s;
    S += s;
}

string T = S;

for(int k = 0; k<H*W; k++){
    int count = 0;
    if(S[k] == '.'){
        

        if(S[k-1] == '#') count ++;
        if(S[k+1]=='#') count ++;
        if(S[k-W]=='#') count ++;
        if(S[k+W]=='#') count ++;
        if(S[k-W+1]=='#') count ++;
        if(S[k-W+1]=='#') count ++;
        if(S[k+W-1]=='#') count ++;
        if(S[k+W+1]=='#') count ++;
    }
    T[k] = count;
}

for(int m = 0; m<H; m++){
    char myChar = T[(m+1)*(W-1)];
    string myString(1, myChar);
    myString += "\n";
}

cout << T << endl;


}

/*
＜＞
マス目の数=H*W
k = 0; k<H*W; k++でまとめて繰り返したいので

Sで受け取る
l = 0; l<W; l++で以下繰り返す
sで受け取ってS+=sでSを完成
T=Sで保存しておく

※Si[j] = S[k]
        左右はS[k-1],S[k+1]
        上下はS[k-W],S[k+W]
        斜めはS[k-W-1],S[k-W+1],S[k+W-1],S[k+W+1]

k = 0; k<H*W; k++で以下繰り返し
    count = 0
    S[k]=='.'なら※8マスにつき#あればcount++;
            ⇒T[k]=count

Tを出力
m = 0; m<H; m++で繰り返し
T[(m+1)*(W-1)]をstringに変換して"\n"を付けて改行し出力


＜さいしょにかんがえたこと＞
Si[j]の左右はSi[j-1],Si[j+1]
       上下はSi-1[j],Si+1[j]
       斜めはSi-1[j-1],Si-1[j+1],Si+1[j-1],Si+1[j+1]

Sで受け取る、T=Sで保存しておく

j=0; j<W; j++で以下繰り返し
i=0; i<H; i++で以下繰り返し
    j =0; j<W; j++で以下繰り返し
    count = 0
    Si[j]=='.'なら上記八マスにつき#あればcount++;
            ⇒Ti[j]=count

Tを出力


*/