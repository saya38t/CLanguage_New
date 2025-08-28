/*TLE連発の問題作*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    vector<int>a(N);
    for(int i=0; i<N;i++){
        cin >> A.at(i);
        a.at(i) = A.at(i);
    }
    reverse(A.begin(), A.end());
    long long ans=0;
    for(int i = 0; i<N; i++){
        int sum =0;
        a.pop_back();
        for(int j=0; j<N-i-1; j++){
            sum+=a.at(j);
        }
        ans+= A.at(i)*sum;
    }
    cout << ans << endl;

}
/*
Aの配列作る
Aの配列をコピーした配列aをつくる
Aの順番を逆にする
N回以下繰り返し
aの末尾を消す
aの要素を合計する
A.at(i)に上記合計をかけてansに足す
ansを出力
*/