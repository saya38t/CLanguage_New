#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);++i)

int main(){
  int d, n;
  cin>>d>>n;
  vector<int>count(d+1);
  rep(i,n){
    int l, r;
    cin >> l >> r;
    l--; r--;
    count[l]++; count[r+1]--;
  }
  rep(i,d+1){
    count[i+1]+=count[i];
  }
  rep(i,d){
    cout<<count[i]<<endl;
  }
  return 0;
}
