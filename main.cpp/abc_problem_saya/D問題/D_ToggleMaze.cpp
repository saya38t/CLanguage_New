#ifndef ONLINE_JUDGE
  #define _GLIBCXX_DEBUG//配列外参照防止
#endif
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
using P = pair<int,int>;
using TP = tuple<int,int,int>;
//a=min(a,b)、a=max(a,b)
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
const double PI = acos(-1); //π
const  vector<int>di={1,0,0,-1};//表移動(4)
const  vector<int>dj={0,1,-1,0};

//bfs(世界ふたつ)
int main(){
    int h,w; cin >> h >> w;
    vector<string>a(h);
    rep(i,h) cin>>a[i];
    int dist[500][500][2];
    rep(i,h)rep(j,w)rep(k,2) dist[i][j][k]=-1;
    queue<TP>que;
    auto ppush=[&](int i,int j, int k, int d){
        if(dist[i][j][k]!=-1) return;
        que.emplace(i,j,k);
        dist[i][j][k]=d;
    };
    rep(i,h)rep(j,w) if(a[i][j]=='S') ppush(i,j,0,0);
    while(!que.empty()){
        auto [i,j,k]=que.front(); que.pop();
        int d=dist[i][j][k];
        if(a[i][j]=='G'){
            cout << d << endl;
            return 0;
        }
        rep(l,4){
            int I=i+di[l],J=j+dj[l],K=k;
            if(I<0 || I>h-1 || J<0 || J>w-1) continue;
            if((k==0 && a[I][J]=='x') || (k==1 && a[I][J]=='o') ||
                a[I][J]=='#') continue;
            if(a[I][J]=='?') K^=1;
            ppush(I,J,K,d+1);
        }
    }
    cout << -1 << endl;
    return 0;
}