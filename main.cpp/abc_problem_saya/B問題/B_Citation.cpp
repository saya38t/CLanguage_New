#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i =0; i<(n) ;++i)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a.at(i);
    int ans=0;
    for(int i=0; i<n+1; i++){
        int x = i, cnt=0;
        for(int j=0; j<n; j++){
            if(a.at(j)>=x) cnt++;
        }
        if(x<=cnt) ans=x;
    }
    cout << ans << endl;
    return 0;
}
/*
x=0,1,2,3,4,…,n
Aにx以上の要素が重複含めてx回以上
xを0~nまで変えながら判定

イメージしやすいようにx=0,1,2,…とメモ
条件の確認。
正確に解く、を意識。
*/