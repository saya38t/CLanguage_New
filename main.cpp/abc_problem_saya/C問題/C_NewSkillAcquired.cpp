#define _GLIBCXX_DEBUG//配列外参照防止
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1); //π
const vector<int>di={1,1,1,0,0,-1,-1,-1};//表移動(8)
const vector<int>dj={1,-1,0,1,-1,-1,1,0};

int main(){
    int n;
    cin >> n;
    map<int,vector<int>>mp;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        //mp[i+1].emplace_back(a);//x:{y}
        //mp[i+1].emplace_back(b);
        mp[a].emplace_back(i+1);
        mp[b].emplace_back(i+1);
    }
    vector<bool>visited(n+1);
    vector<bool> ans(n+1); //falseで初期化
    auto dfs=[&](auto dfs, int x)-> void {//ラムダ式
        vector<int>& p = mp[x];
        int length = p.size();//おおきさ
        rep(i,length){
            if(visited[p[i]]) continue;
            visited[p[i]]=true;
            ans[p[i]]=true;
            dfs(dfs,p[i]);
        }
        return;
    };
    dfs(dfs,0);
    int cnt=0;
    rep(i,n){
        if(ans[i+1]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}