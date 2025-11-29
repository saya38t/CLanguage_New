#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<double,double>;

int main(){
    int n;
    double s,t; cin >> n >> s >> t;
    vector<P>ab(n);
    vector<P>cd(n);

    rep(i,n){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        ab[i]=pair(a,b); cd[i]=pair(c,d);
    }

    double ans=100000;

    vector<int>a(n);
    rep(i,n) a[i]=i;

    //next_permutation(順列全探索)
    sort(a.begin(),a.end());//必ずsortしてから！
    do{//並び替えた配列への処理
    for(int bit=0; bit<(1<<n) ;++bit){//bit全探索(ここで選び方決める)
        double l = 0; P pre=P(0,0);
        for(int i=0; i<n; ++i){//どれを選ぶか(整数型に復元)
            int k=a[i];
            double A = ab[k].first, B = ab[k].second,
                C = cd[k].first, D = cd[k].second,
                p1=pre.first, p2=pre.second;
            if(bit & (1<<i)){//ab->cd
                l +=(sqrt((A-p1)*(A-p1)+(B-p2)*(B-p2)))/(double)s;
                pre = P(C,D);
            }
            else{//cd->ab
                l +=(sqrt((C-p1)*(C-p1)+(D-p2)*(D-p2)))/(double)s;
                pre = P(A,B);
            }
        }
        ans = min(ans,l);
    }
    }while(next_permutation(a.begin(),a.end()));//並び替え処理

    rep(k,n){
        double A = ab[k].first, B = ab[k].second,
            C = cd[k].first, D = cd[k].second;
        ans += (sqrt((A-C)*(A-C)+(B-D)*(B-D)))/(double)t;
    }
    cout << fixed << setprecision(15) << ans << endl;
  //出力桁数指定(fixed << setprecision(有効数字何桁か))
    return 0;
}
