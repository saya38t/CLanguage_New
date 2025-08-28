#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> count(101,0);
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        count.at(a)++;
    }

    vector<int> ai(N);
    int k = 0;
    for(int i=101; i>0;i--){
        int x = i-1, y = count.at(x);
        if(y!=0){
            for(int j=0; j<y; j++){
                ai.at(k) = x;
                k++;
            }
        }
    }
    
    int A=0, B=0;
    for(int k=0; k<N; k++){
       if(k%2==0) A += ai.at(k);
       else B += ai.at(k);
    }
    cout << A-B << endl;
}
/*
要素数101の配列をつくる

N回以下繰り返し
a受け取る
要素数=aの要素で値の数をカウント

101回以下繰り返し
要素数101の配列を末尾から順番に取り出す
要素!=0のとき、x=要素数、y=要素の値として
xをy回新しい配列(N)に入れる←大きい順の配列完成

順番にa,bに足して引いて答え
*/
