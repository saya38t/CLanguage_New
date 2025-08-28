#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    //map<キー,値>
    //キー：値の配列のイメージ
    map<int, int>cnt;//0で初期化
    int x=1, y=4;
    cnt[x+y]++;
    cnt[y-x]++;
    cnt[x-y]++;
    //vectorと違い、マイナスのキーを指定しても壊れにくい

    //multimap
    multimap<int,int>check;
    int z=3, w=6;
    //挿入
    check.emplace(z,w);//キーｚ：値w
}