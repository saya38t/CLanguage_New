/*
考えてみよーう、理解してみよーう、
動かせるように書き換えてみよーう
*/


#include<bits/stdc++.h>
using namespace std;
#define rep(i,m,n)for(int i = 0; m<i<(int)(n) ; i++)

int main(){
    int H, W;
    string B[101];

    cin >> H >> W;
    rep(y,0, H) cin >> B[y];
 
    rep(y,0, H)rep(x,0, W) if(B[y][x] == '.') {
        int c = 0;
        rep(dx, -1, 2) rep(dy, -1, 2) {
            if (dx == 0 and dy == 0) continue;
            int xx = x + dx;
            int yy = y + dy;
            if (0 <= xx and xx < W and 0 <= yy and yy < H) {
                if (B[yy][xx] == '#') c++;
            }
        }
        B[y][x] = char('0' + c);
    }
 
    rep(y,0, H)cout << B[y] << endl;

}

/*
これも一応実装するだけなのだが、近傍の座標をどうにかする常套テクを知っていると実装が楽になる。
変数dx,dyを用意し、それぞれdx=[-1,0,1], dy=[-1,0,1]とする。
すると、(x,y)近傍の座標(xx, yy)はxx = x + dx, yy = y + dyとでき、単純なループで近傍を指定できる。
後は、爆弾の個数を数えて更新するだけ。
by.hamayan
*/