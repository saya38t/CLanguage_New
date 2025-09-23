//多始点bfs
#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π

int main(){
    int h,w,d;
    cin >> h >> w >> d;
    vector<string>S(h);
    rep(i,h) cin >> S[i];
    vector<vector<bool>>vis(h,vector<bool>(w));
    vector<vector<int>>dist(h,vector<int>(w,-1));
    queue<P> que;
    rep(i,h)rep(j,w) {
        if(S[i][j]=='H'){
            dist[i][j] = 0;
            vis[i][j] = true;
            que.push(pair(i,j));//頂点追加
        }
    }
    while(!que.empty()){
        pair v = que.front();
        que.pop();
        if(dist[v.first][v.second]==d) continue;
        //たどれる頂点みる
        vector<int>di={1,0,0,-1};//表移動(4)
        vector<int>dj={0,1,-1,0};
        vector<bool>ng(4);
        rep(k,4){
            if(ng[k]) continue;
            int I=v.first+di[k], J=v.second+dj[k];
            if(I<0 || I>h-1 || J<0 || J>w-1) continue;
            if(S[I][J]=='#'){
                ng[k]=false;
                continue;
            }
            if(dist[I][J]==-1){
                dist[I][J]=dist[v.first][v.second]+1;
                que.push(pair(I,J));
                vis[I][J]=true;
            }
        }
    }
    int cnt = 0;
    rep(i,h)rep(j,w)if(vis[i][j]) cnt ++;
    cout << cnt << endl;
    return 0;
}