#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> s(N);
    for(int i=0; i<N; i++){
        cin >> s.at(i);
    }
    int M;
    cin >> M;
    vector<string> t(M);
    for(int j=0; j<M; j++){
        cin >> t.at(j);
    }
    int ans =0;
    for(int i=0; i<N; i++){
        string check = s.at(i);
        int count = 0;
        for(int j=0; j<N; j++){
            if(check == s.at(j)) count++;
        }
        for(int j= 0; j<M; j++) {
            if(check == t.at(j)) count--;
        }
        if(count>ans) ans=count;
    }
    cout << ans << endl;
}

/*
配列sと配列t
N回繰り返す
siと同じ単語の数を数えて計算しcountに&&その単語をリストから消す
count初期値0
count>ansならcountを代入
ans出力
*/