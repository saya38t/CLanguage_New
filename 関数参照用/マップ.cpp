#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    //map<キー,値>
    //(キー：値)の配列が出来上がる
    map<int, int>cnt;//0で初期化
    int x=1, y=4;
    cnt[x+y]++;
    cnt[y-x]++;
    cnt[x-y]++;
    //vectorと違い、マイナスのキーを指定しても壊れにくい

    //(キー：配列)の配列を作りたいなら
    map<int,vector<int>>mp;//(値：配列)
    int x = 1, y=3;
    mp[x].emplace_back(y);//x:{y}
    //配列を取り出す
    vector<int>& p = mp[x];//参照して取り出すのが安全
    //あとはvectorと同じように
    int length = p.size();//おおきさ
    int p_0 = p[0];//要素とりだし


    //multimap
    multimap<int,int>check;
    int z=3, w=6;
    //挿入
    check.emplace(z,w);//キーｚ：値w

}