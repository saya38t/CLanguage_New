#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
const double PI = acos(-1);

int main(){
   int t;
   cin >> t;
   rep(i,t){
    unsigned a,b,c;
    cin >> a >> b >> c;
    cout << min({a,c,(a+b+c)/3}) << endl;
   }
   return 0;
}

/**/