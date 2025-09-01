/*AC*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int q;
    cin >> q;
    vector<P>cx;
    vector<int>k;
    rep(i,q){
        int num;
        cin >> num;
        if(num==1) {
            int c,x;
            cin >> c >> x;
            cx.emplace_back(pair(c,x));
        }
        else{
            int K;
            cin >> K;
            k.push_back(K);
        }
    }//
    int j=0;
    rep(i,k.size()){
        ll sum = 0;
        while(k[i]>0){
            if(k[i]>=cx[j].first){
                sum+= (ll) cx[j].first * cx[j].second;
                k[i]-=cx[j].first;
                j++;
            }
            else{
                sum+= (ll) k[i]*cx[j].second;
                cx[j].first-=k[i];
                k[i]=0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
/**/