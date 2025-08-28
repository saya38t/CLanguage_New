#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin >>n>>q;
    vector<int> query(n);
    vector<bool> check(n, true);
    int k=0;
    rep(i,q){
        int num;
        cin >> num;
        if(num==1) {
            int p, x;
            cin >> p >> x;
            k%=n;
            p-=k;
            query.at(p-1) =x;//p-1番目はx
            check.at(p-1) =false;
        }
        else if(num==2){
            int p, solidp;//pが入れ替わるからpそのものを変える
            cin >> p;
            solidp=p;
            k%=n;
            p-=k; 
            if(p<=0)p+=n;
            if(check.at(p-1)) query.at(p-1)=solidp;//p-1番目の要素の値は何なのか、配列自体は変えてない
            cout << query.at(p-1) << endl;//p-1番目の要素が答え
        }
        else if(num==3){
            int cink;
            cin >> cink;
            k+=cink;
        }
    }
    return 0;

}
/*
最小限保存したい
vector配列ｐ番目
1...(p,x)
2...cout << x
3...solidp=p;
        k%=n;
        p-=k; これは1,2にやる
　　　全部変えたいのでkを保存
    k+=cink;

*/