#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>x(q);
    rep(i,q) cin >> x[i];//ボール
    vector<P>box(n);//(数、箱の番号ー１)
    rep(i,n) box[i].second = i;//あとで1タス
    vector<int>ball(q);//ボール配列
    rep(i,q){
        if(x[i]!=0){
            rep(j,n){
                if(box[j].second == (x[i]-1)) box[j].first++;
                else continue;
            }
            ball[i] = x[i];
        }
        else{
            sort(box.begin(),box.end());
            box[0].first++;
            ball[i]=box[0].second+1;
        }
    }
    rep(i,q) cout << ball[i] << ' ';
    cout << endl;
    return 0;
}
/**/