#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    string s;
    cin >> s;
    int ans=0;
    int cnt=0;
    while(s.length() != 0){
        int lastnum = ((s.back() - '0' - cnt)+10)%10;
        if(lastnum==0){
            s.pop_back();
            ans++;
        }
        else{
            ans += lastnum;
            cnt += lastnum;
            cnt %= 10;
        }
    }
    cout << ans << endl;
    return 0;
}
/*
sからスタート
末尾が０のときa＝１
末尾が０以外のとき末尾の数だけb＝末尾の数
このときほかの数をいくつ変えるかも保存
cnt += lastnum;
cnt %= 9;
*/