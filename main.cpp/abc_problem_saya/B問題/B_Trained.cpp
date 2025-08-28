#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> veca(N);
    for(int j = 0; j<N ; j++){
        cin >> veca.at(j);
    }
    int i = 0, count =0;
    bool ans = false;
    for(int j=0; j<N; j++){
        count++;
        if(veca.at(i)==2){
            ans = true;
            break;
        }
        i = veca.at(i) -1;
    }
    if(ans) cout << count << endl;
     else cout << -1 << endl;
}
/*
Aiの配列つくる
i初期値0
N回以下繰り返し
count++;
Ai=2ならcount出してbreak
i = Ai +1
breakしなかったら-1を出力
*/