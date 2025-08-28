#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;

    vector<int>l(m),r(m);
    rep(i,m) cin >> l[i] >> r[i];
    rep(i,m){
        int a=l[i], b=r[i];
        int A = a-1, B=b-a+1;
        string S=s.substr(A,B);//
        string T=t.substr(A,B);
        s.replace(A,B,T);//replace関数で時間とられた
        t.replace(A,B,S);
    }
    cout << s << endl;
    return 0;

}
/*TLE*/