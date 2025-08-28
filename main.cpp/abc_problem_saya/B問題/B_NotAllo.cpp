#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int>A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    int n = N;
    int ans = 0;
    for(int i=0;i<N;i++){
        int count =0;
        for(int j=0; j<M; j++){
            for(int k=0; k<n; k++){
                if(A.at(k)==j+1){
                    count ++;
                    break;
                }
            }
        }
        if(count==M){
           A.pop_back();
           n--;
           ans ++;
        }
        else{break;}
    }
    cout << ans << endl;
}

/*
Aの配列
以下n回繰り返し
Mを全て含むか確認(含まなかったらbreak)
Aの末尾削除

*/