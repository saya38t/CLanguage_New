#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n) ;++i)

int main(){
    int n;
    cin >> n;
    vector<int> A(n+1);
    int sum=0;
    rep(i,n) {
        int a;
        cin >> a;
        sum+=a;
        A.at(i+1)=sum;
    }
    int q;
    cin >> q;
    vector<int>L(q);
    vector<int>R(q);
    rep(i,q){
        int l, r;
        cin >> l >> r;
        L.at(i)=l;
        R.at(i)=r;  
    }
    rep(i,q){
        int l=L.at(i), r=R.at(i);
        int num=r-(l-1);
        int check = A.at(r)-A.at(l-1);
        string ans;
        if(check*2==num) ans="draw";
        else if(check*2<num) ans="lose";
        else if(check*2>num) ans="win";
        cout << ans << endl;
    }
}
/*
１のときあたり
０のときはずれ
質問Q個
aの配列
l,rも配列
num=(r-(l-1))
sum*2==check;draw
sum*2<check;lose
sum*2>check;win
累積和sum＝＝あたりの数
r-(l-1)==検討する要素の数
*/