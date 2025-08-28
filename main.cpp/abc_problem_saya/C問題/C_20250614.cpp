#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >>n>>q;
    vector<int> query(n);//まず初期化
    rep(i,n)query.at(i)=i+1;
    int k=0;
    rep(i,q){
        int num;
        cin >> num;
        if(num==1) {
            int p, x;
            cin >> p >> x;
            p--;
            query.at((k+p)%n) = x;
        }
        else if(num==2){
            int p;//pが入れ替わるからpそのものを変える
            cin >> p;
            p--;
            cout << query.at((k+p)%n) << endl;
        }
        else if(num==3){
            int cink;
            cin >> cink;
            k+=cink;
            k%=n;
        }
    }
    return 0;

}
/*
最小限保存したい
vector配列ｐ番目
1...(p,x)
2...cout << x
3...A[p]->A[(p+k)%n]これは１，２のときにやる
    kで先頭に。pで指す。％ｎでループ対策
　　　全部変えたいのでkを保存
    k+=cink;

*/