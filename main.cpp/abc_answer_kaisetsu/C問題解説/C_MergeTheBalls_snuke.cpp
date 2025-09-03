//snukeさん
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int>A;
    rep(i,n){
        int a;
        cin >> a;
        A.push_back(a);
        while(A.size()>1){//イテレータ工夫
            int x = A.back(), y=A.end()[-2];//末尾から２つ目の要素にアクセス
            if(x==y){
                A.pop_back();
                A.pop_back();
                x++;
                A.push_back(x);
            }
            else if(x!=y) break;//whileのときはbreak絶対必要！！
        }
    }
    cout << A.size() << endl;
    return 0;
}
/**/