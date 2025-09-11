#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
    int n;
    cin >> n;
    vector<vector<int>>cdn(n+1,vector<int>(n+1));
    int mx=0;
    vector<P>chk;
    rep(i,n){
        string s;
        cin >> s;
        rep(j,n) {
            cdn[i+1][j+1]=s[j]-'0';
            mx = max(mx,cdn[i+1][j+1]);
            if(cdn[i+1][j+1]==mx) chk.emplace_back(i+1,j+1);
        }
    }
    int m = chk.size();
    vector<int>ans;
    rep(i,m){
        vector<int>s(n);
        int x = chk[i].first;
        int y = chk[i].second;
        s[0]=cdn[x][y];
        rep(k,n-1){
            int mij=0;
            int s = ++x,t=y;
            int ms,mt;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=++x;t=++y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=++x;t=--y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=--x;t=--y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=--x;t=y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=--x;t=++y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=x;t=++y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
            s=x;t=--y;
            if(s>n) s=1;
            if(t>n) t=1;
            if(s<1) s=n;
            if(t<1) t=n;
            mij=max(mij,cdn[s][t]);
        }
    }
}
/**/